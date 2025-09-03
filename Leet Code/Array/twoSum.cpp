https://leetcode.com/problems/two-sum/

// There are two types of question 1) return yes or no 2) return index

// Brute Force Approch
// Time Complexity = O(n^2)
// Space Complexity = O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                  if(nums[i] + nums[j] == target){
                    return{i,j};
                  }
            }
        }
        return {};
    }
};

// Optimal Approch Case 2
// Time Complexity = O(nlogn + n)
// Space Complexity = O(1)
class Solution {
public:
    string twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0,j = n-1;
        while(i<j){
            if(nums[i] + nums[j]>target) j--;
            else if (nums[i] + nums[j]<target) i++;
            else return "Yes";
        }
        return "NO";
    }
};
