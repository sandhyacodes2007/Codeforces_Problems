#include <bits/stdc++.h>
using namespace std;

int maximumSortK(vector<int>& nums) {
    int n = nums.size();
    int k = -1; // Start with all bits set
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) { // Out-of-place element
            if (k == -1) k = nums[i];
            else k &= nums[i];
        }
    }
    return (k == -1) ? 0 : k; // If already sorted, return 0
}

int main() {
    vector<int> nums1 = {0, 3, 2, 1};
    cout << maximumSortK(nums1) << endl; // Output: 1

    vector<int> nums2 = {0, 1, 3, 2};
    cout << maximumSortK(nums2) << endl; // Output: 2

    vector<int> nums3 = {3, 2, 1, 0};
    cout << maximumSortK(nums3) << endl; // Output: 0
}
