https://leetcode.com/problems/move-zeroes/

// Time Complexity = O(n)
// Space complexity = O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                if(i != j) swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

// Time Complexity = O(n)
// Space complexity = O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 0;
        while(i<n){
           if(nums[i] != 0) {
             nums[j] = nums[i];
             j++;
             i++;
           }
           else i++;
        }
        for(int k =j;k<n;k++){
            nums[k] = 0;
        }
    }
};