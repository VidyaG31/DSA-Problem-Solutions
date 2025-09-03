https://leetcode.com/problems/single-number/

// Optimal Solution
// Time complexity = O(n)
// Space Complexity = O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
       for(int i = 0 ; i<n;i++){
        xor1 ^= nums[i];
       }

       return xor1;
    }
};