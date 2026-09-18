// Problem: LC 1929 - Concatenation of Array
// Link: https://leetcode.com/problems/concatenation-of-array/
// Approach: Copy nums into ans, then copy nums again
// Time: O(n) | Space: O(n)
// Date: 2026-09-19

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};