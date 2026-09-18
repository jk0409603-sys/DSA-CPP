// *Question:** Return max number of consecutive 1s in a binary array.
// **Approach:** Track current streak, reset on 0, keep max seen.
// **Complexity:** Time O(n) | Space O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int currentcount=0;
         int maxcount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                currentcount++;
                maxcount=max(maxcount,currentcount);
            }
            else
            {
                currentcount=0;
            }
        }
        return maxcount;
    }
    
};