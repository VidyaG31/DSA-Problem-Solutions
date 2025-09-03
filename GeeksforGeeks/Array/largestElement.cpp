https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1

// Brute Force Approch: sort the array and last element is largest
// Time complexity = O(nlogn)

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        merge_sort(arr,0,n);
        quick_sort(arr,0,n);
        return arr[n-1];;
    }
};


// Optimal Approch
// Time complexity = O(n)

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        for(int i = 1 ; i<arr.size();i++){
            if(arr[i]> largest) largest = arr[i];  
        }
        return largest;
    }
};
