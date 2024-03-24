// function to travers through the array
// and print the elements of the array
#include <iostream>
void printArray(int arr[], int n)
{
    int o;
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << std::endl;
        std::cin >> o;
    }
}

int main()
{
    int arr_int[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    printArray(arr_int, n);
    return 0;
}