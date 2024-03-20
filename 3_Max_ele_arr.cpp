// initialize an array and a max element and then in the for loop check if the array elemnt is greate or not if yes then update the value
#include <iostream>
using namespace std;
void max_ele_arr(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    cout << "The biggest element in the array is :" << max << endl;
}

int main()
{
    int arr_int[5] = {1, 74, 3, 64, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    max_ele_arr(arr_int, n);
    return 0;
}