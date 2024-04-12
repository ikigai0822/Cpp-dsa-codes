#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    cout << "Enter array before sorting : ";
    for (int i = 0; i < n-1; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {

        // Find the minimum element in unsorted array
        int min_index = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_index])
                min_index = j;

        // Swap the found minimum element with the first element
        std::swap(arr[min_index], arr[i]);
    }

    cout << "Enter array after sorting : ";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int T;
    cout << "Enter No of Test Cases : ";
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int n;
        cout << "Enter no of input for the array : ";
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cout << "Enter input " << i << " : ";
            cin >> arr[i];
        }

        selectionSort(arr, n);
    }
}