// Problem: LC 1295 - Find Numbers with Even Number of Digits
// Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Approach: Convert each number to string, count those with even length
// Time: O(n * d) | Space: O(d)
// Date: 2026-09-19

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            string num = to_string(nums[i]);
            int digits = 0;

            for(int j = 0; j < num.size(); j++)
            {
                digits++;
            }

            if(digits % 2 == 0)
            {
                count++;
            }
        }

        return count;
    }
};