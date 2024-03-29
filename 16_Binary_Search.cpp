#include <iostream>
#include <cmath>
using namespace std;

int binarysearch(int arr[], int start, int end, int target)
{
    int mid = ceil((start + end) / 2);
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
    {
        return binarysearch(arr, start, mid - 1, target);
    }
    else
    {
        return binarysearch(arr, mid + 1, end, target);
    }
}

int main()
{
    int num = 1;
    int arr_int[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr_int) / sizeof(arr_int[0]);
    int high = n - 1, low = 0;
    int res = binarysearch(arr_int, low, high, num);
    cout << "The Index of the Element is : " << res;
    return 0;
}
