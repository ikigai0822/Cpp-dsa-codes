#include <iostream>
using namespace std;
void array_reversal(int arr[], int len)
{
    int reversed_arr[len];
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        reversed_arr[j] = arr[i];
        j++;
    }
    cout << "The reversed array is :";
    for (int i = 0; i < len; i++)
    {

        cout << reversed_arr[i];
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    array_reversal(array, n);
}