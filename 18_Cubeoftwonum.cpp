//in this code we are checking that if the input is equal two sum of two cubes or not 

#include <iostream>
#include <cmath>
using namespace std;

int checkCubeSum(long long int x) {
     if (x == 1) {
        return 1;
    }
    long long int max_val = pow(x, 1.0/3.0) + 1;
    for (long long int a = 0; a <= max_val; a++) {
        for (long long int b = 0; b <= max_val; b++) {
            if (pow(a, 3) + pow(b, 3) == x) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        long long int x;
        cin >> x;

        int flag = checkCubeSum(x);
        if (flag == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}