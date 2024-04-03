// smallest alphabets greater than the given element
// find the smallest character or integer depending of the type of the sorted which is larger than the input k

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int T; // no of test cases
    cout << "Enter the no of test cases : ";
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        cout << arr << endl;

        char k; // the target value which you want to find the element greater than
        cout << "Enter alphabet : ";
        cin >> k;

        int n = size(arr);

        for (int i = 0; i < n; i++)
        {
            if (k > arr[i])
                continue;

            if (k==arr[i]){

                cout << "Index: " << i+1  << ", Value: " << arr[i+1] << endl;
                break;
            }
            else
            {
                cout << "Index: " << i  << ", Value: " << arr[i] << endl;
                break;
            }
        }
    }
}