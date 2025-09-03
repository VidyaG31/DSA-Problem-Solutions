https://leetcode.com/problems/rotate-array/description/

// Brute Force Approch
// Time complexity = O(2n)
// space complexity = O(n)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int arr[n];
        
        for(int i = k; i<n+k;i++){  
            arr[i%n] = nums[i-k];
        }
        for(int i = 0 ; i<n;i++){
            nums[i] = arr[i];
        } 

        }
};



// Optimal Approch
// time complexity = O(2n)
// space complexity = O(1)

class Solution {
public: 
    void reverse(vector<int>& nums, int start,int end){
        for(int i = start,j= end-1;i<j;i++,j--){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
         reverse(nums,0,n);
         reverse(nums,0,k);
         reverse(nums,k,n);
    }
};