// In this we are trying to count the frequency of a number in a given sorted array by linearsearch as well as binary search

#include <iostream>
#include <cmath>
using namespace std;

int count_fre_bs(int arr[], int low, int high, int target)
{
    if (high < low)
    {
        return 0;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] > target)
    {
        return count_fre_bs(arr, low, mid - 1, target);
    }
    else if (arr[mid] < target)
    {
        return count_fre_bs(arr, mid + 1, high, target);
    }
    else
    {
        return 1 + count_fre_bs(arr, low, mid - 1, target) + count_fre_bs(arr, mid + 1, high, target);
    }
}

int count_fre_ls(int arr[], int n, int target)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        char choice;

        printf("Press L for Linear search \nPress B for Binary Search");
        cin >> choice;

        int n;
        cout << "Enter no of input for arr" << endl;
        cin >> n;

        cout << "Enter input in sorted manner for BS other wise program will fail" << endl;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cout << "Enter input no : " << i << " : ";
            cin >> arr[i];
        }

        int num;
        cout << "Enter the number which you want to find :";
        cin >> num;

        if (choice == 'B' || choice == 'b')
        {
            cout << "Frequency of " << num << " is " << count_fre_bs(arr, 0, n - 1, num) << endl;
        }
        else if (choice == 'L' || choice == 'l')
        {
            cout << "Frequency of " << num << " is " << count_fre_ls(arr, n, num) << endl;
        }
        else
        {
            cout << "Invalid Choice for searching method";
        }
    }
    return 0;
}