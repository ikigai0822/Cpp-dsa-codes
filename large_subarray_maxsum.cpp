#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void largestSubarrayWithMaxZero(const vector<int> &arr)
{
    int maxsum ;

    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        cout <<"sum" << sum << endl;
        cout <<"maxsum" << maxsum << endl;
        
        if (sum > maxsum)
        {
            maxsum = sum;
        cout <<"maxsum" << maxsum << endl;
        }
        else if (sum < 0)
        {
            sum == 0;
        }
    }
    cout << "largest sum in the array" << maxsum;
}

int main()
{
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};
    largestSubarrayWithMaxZero(arr);
    return 0;
}