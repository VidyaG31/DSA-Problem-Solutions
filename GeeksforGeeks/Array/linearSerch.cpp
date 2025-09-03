https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1

// Time complexity = O(n);
// Space Complexity = O(1);

class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        for(int i = 0; i<n;i++){
            if(arr[i] == k) return true;
        }
        return false;
    }
};