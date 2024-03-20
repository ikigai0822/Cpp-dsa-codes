#include <iostream>
using namespace std;
void printArray(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] + arr[j] == num)
            {
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
}

int main()
{
    int arr_int[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    int num;
    cout << "Enter Number whose sum of pair you want to find out: ";
    cin >> num;
    printArray(arr_int, n, num);
    return 0;
}
