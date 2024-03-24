#include <iostream>
using namespace std;

void countoddeven(int array[], int length)
{
    int even_count = 0, odd_count = 0;
    for (int j = 0; j < length; j++)
    {
        if (array[j] % 2 == 0)
        {
            even_count = even_count + 1;
            cout << "Even : " << array[j] << endl;
            cout << "Even Count : " << even_count << endl;
        }
        else
        {
            odd_count = odd_count + 1;
            cout << "Odd : " << array[j] << endl;
            cout << "Odd Count : " << odd_count << endl;
        }
    }
}

int main()
{
    int T;
    cout << "Enter Number of Test Cases :";
    cin >> T;

    for (int t = 0; t < T; t++)
    {

        int N;
        cout << "Enter Number of inputs :";
        cin >> N;

        int arr[N];
        cout << "Enter the digits :";
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        countoddeven(arr, N);
    }
}