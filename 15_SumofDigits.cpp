#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(int N) {
    int sum = 0;
    while (N != 0)
    {
        sum += N % 10; // get the last digit
        N /= 10;       // remove the last digit
    }
    return sum;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int N;
        cout << "Enter a Number:";
        cin >> N;

        string numberString = to_string(N);
        int length = numberString.length();

        if (length == 0)
            continue;

        int sum = sumOfDigits(N);
        cout << "Sum of digits: " << sum << endl;
    }

    return 0;