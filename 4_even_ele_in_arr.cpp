#include <iostream>
using namespace std;
void even_elements(int arr[], int n)
{
    int count = 0, even_ele = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_ele = arr[i];
            count++;
            cout << "The " << count << " even element in the array is :" << even_ele << endl;
        }
    }
    cout << "The even number of element in the array is : " << count << endl;
}

int main()
{
    int arr_int[5] = {1, 74, 3, 64, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    even_elements(arr_int, n);
    return 0;
}