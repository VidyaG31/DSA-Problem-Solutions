https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/


// Brute Force Approch
// Time complexity = O(2n)

class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            int a = 0;
            for(int k = 0; k<nums.size()-1 ; k++){
                if(nums[k]>nums[k+1]) a = 1;
            }
            if (a==0) return true;
            else i++;
            int first = nums[0];
            for(int j = 0 ; j<nums.size()-1; j++){
                nums[j] = nums[j+1];
            }
            nums[nums.size()-1] = first;
        }  
        return false;  
    }
};



// Optimal Approch
// Time complexity = O(n)

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0 ; i< n; i++){
            if(nums[i] > nums[(i+1)%n] count++;
        }
        if (count<= 1 ) return true;
        else return false;
    }
};