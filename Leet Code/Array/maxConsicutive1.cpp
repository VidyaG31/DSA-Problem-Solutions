https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        int max = 0;
        for(int j = 0;j<n;j++) {
            if(nums[j] == 1) {
                i = i+1;
                if(i>max) {
                    max = i;
                }  
            }
            else i = 0;
        }
        return max;
    }   
};