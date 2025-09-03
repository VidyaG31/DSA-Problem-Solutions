https://www.geeksforgeeks.org/problems/selection-sort/1

// Time complexity = O(n^2)
// Space complexity = O(1)

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i< n-1 ; i++){ 
            int min = arr[i];
            int minindex = i;
            for(int j = i+1; j<n; j++){
                if(arr[j]<min){
                    min = arr[j];
                    minindex=j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
        
    }
};