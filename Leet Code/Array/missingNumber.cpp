https://leetcode.com/problems/missing-number/

// Brute Force Approch
// Time complexity = O(2n)
// Space Complexity = O(n+1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>hash(n+1,0);
        for(int i = 0 ; i<n; i++){
            hash[nums[i]] = 1;
        }
        for(int i = 0; i<=n;i++){
            if(hash[i]==0) {
                return i;
        }  
        }
        return -1;
    }
};

// Optimal Approch
// Time complexity  = O(n)
// Space Complexity = O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0 ; i<n;i++){
            sum = sum + nums[i];
        }
        int maxsum = n*(n+1)/2;
        return maxsum-sum;
    }
};

// 2 optimal solution 
// Time complexity = O(2n)
// Space Complexity = O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor1 = 0;
        int xor2 = 0;
        for(int i = 0 ; i<=n;i++){
            xor1 ^=i;
        } 
        for(int i = 0 ; i<n;i++){
            xor2 ^=nums[i];
        } 
        return xor1^xor2;
    }
};