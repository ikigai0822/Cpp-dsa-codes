#include <iostream>
using namespace std;

int checkifprime(int Number)
{
    if (Number <= 1)
    {
        return 1;
    }
    for (int i = 2; i < Number; i++)
    {
        if (Number % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int T;
    cout << "Enter Number of Test Cases :";
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N;
        cout << "Enter Number of inputs :";
        cin >> N;

        int arr[N];
        cout << "Enter the numbers :";
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int prime_count = 0;
        for (int i = 0; i < N; i++)
        {
            if (checkifprime(arr[i]) == 0)
            {
                prime_count++;
            }
        }

        cout << "Number of prime numbers: " << prime_count << endl;
    }
}