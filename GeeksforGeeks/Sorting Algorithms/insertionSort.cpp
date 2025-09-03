https://www.geeksforgeeks.org/problems/insertion-sort/1

// Time complexity :
//          => worst case / average case => O(n^2)
//          => Best Case => O(n)
// Space complexity : O(1)

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i< n; i++){
            for(int j = i ; j > 0; j--){
                if(arr[j] < arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
            }
        }
        
    }
};