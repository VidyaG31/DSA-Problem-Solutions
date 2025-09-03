https://www.geeksforgeeks.org/problems/bubble-sort/1

// Brute Force Approch : Worst and Average Case

// Time complexity = O(n^2)
// Space complexity = O(1)

// Approch 1:

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {

        int n = arr.size();
        for(int i= n-1; i>=1; i--){
            for(int j = 0 ; j<i;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
};

// Approch 2:

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i<n-1; i++){
            for(int j = 0 ; j<n-i-1 ; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            } 
        }
        
    }
};

// Optimal Approch: Best Case

// Time complexity = O(n)
// Space complexity = O(1)

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        int isswap = 0;
        for(int i = 0 ; i<n-1; i++){
            for(int j = 0 ; j<n-i-1 ; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    isswap = 1;
                }
            } 
            if(isswap == 0) break;
        }
        
    }
};
