#include <iostream>
using namespace std;

void fibonacci(int N, int &prev, int &sum) //  & here is use as the reference to the existing variable 
{
    for (int i = 1; i <= N; i++)
    {
        cout << prev << " ";
        int next = prev + sum;
        prev = sum;
        sum = next;
    }
}

int main()
{
    int T, N;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
     for (int t = 0; t < T; t++)
    {
        int prev = 0, sum = 1;
        cin >> N; // corrected line
        fibonacci(N, prev, sum);

        cout << endl;
    }

    return 0;
        cout << endl;
    }

    return 0;
}