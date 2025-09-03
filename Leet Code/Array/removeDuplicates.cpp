https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// Brute Force Approch
// Time Complexity = O(nlogn + n)
// Space comeplexity = O(n)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        set<int>st;
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it: st){
            nums[index] = it;
            index++; 
        }
        return index;
    }
};

// Optimal Solution
// Time Complexity = O(n)
// Space comeplexity = O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int i = 1;
        while(i<n){
            if(nums[index] == nums[i]) i++;  
            else {
                nums[index+1] = nums[i];
                index++;
            }            
        }
        return index+1;
    }
};