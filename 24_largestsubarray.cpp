#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> largestSubarrayWithSumZero(const vector<int>& arr) {
    int maxLength = 0;
    int start = 0;

    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == 0 && maxLength < j - i + 1) {
                maxLength = j - i + 1;
                start = i;
            }
        }
    }

    return make_pair(start, start + maxLength - 1);
}

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    pair<int, int> result = largestSubarrayWithSumZero(arr);
    cout << "The largest subarray with sum 0 starts at index " << result.first;
    cout << " and ends at index " << result.second << endl;
    return 0;
}

// this code can be optimized by using hasmap 
