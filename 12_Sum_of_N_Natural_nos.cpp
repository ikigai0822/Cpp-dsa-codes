#include <iostream>
using namespace std;

void sumofNaturalNos(int N)
{
    int sum = 0;
    for (int j = 1; j <= N; j++)
    {
        sum += j;
    }
    cout << "Sum of N natural Number is :" << sum;
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

        sumofNaturalNos(N);
    }
}