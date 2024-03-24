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
        cout << "Enter Number to check if prime or not :";
        cin >> N;

        int result = checkifprime(N);
        cout << "Result: " << result << endl;
    }
}