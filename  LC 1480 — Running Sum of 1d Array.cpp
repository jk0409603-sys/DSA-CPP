// Problem: LC 1480 - Running Sum of 1d Array
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Approach: Traverse from index 1, add previous element to current (in-place)
// Time: O(n) | Space: O(1)
// Date: 2026-09-19

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]=nums[i]+nums[i-1];
            
        }
        return nums;
    }
};