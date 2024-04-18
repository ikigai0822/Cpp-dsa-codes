#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
       void sortColors(vector<int>& nums) {
        int n = nums.size();
        int end = n - 1; // Initialize end index for optimized loop
        while (end > 0) {
            
            int bubbleIndex = 0; // Index of the current "bubble" element
            while (bubbleIndex < end) {
                if (nums[bubbleIndex] > nums[bubbleIndex + 1]) {
                    swap(nums[bubbleIndex], nums[bubbleIndex + 1]);
                     // Set swapped to true if a swap occurs
                }
                bubbleIndex++;
            }
            end--; // Reduce end index to optimize loop
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
