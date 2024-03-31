//linear search implementation via loops 
#include <iostream>
#include <string>
using namespace std;

int linearsearch(int arr[], int pivot, int size, int target)
{
    if (arr[pivot] == target)
    {
        return pivot;
    }
    else if (pivot == size)
    {
        return -1;
    }

    return linearsearch(arr, pivot + 1, size, target);
}
int main()
{
    int num = 1;
    int arr_int[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    int pivot = 0;
    int res = linearsearch(arr_int, pivot, n, num);
    cout << "The Index of the Element is : " << res;
    return 0;
}