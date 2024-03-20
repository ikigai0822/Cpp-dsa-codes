// initilize an array
// initilize an interger that will store the sum of the array
// traverse through the array to sum the elements one by one

#include <iostream>
using namespace std;

void sumofelementsofarray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of the elements of array is : " << sum;
}

int main()
{
    int arr_int[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    sumofelementsofarray(arr_int, n);
    return 0;
}