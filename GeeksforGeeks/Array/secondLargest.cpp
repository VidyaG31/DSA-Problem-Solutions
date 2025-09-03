https://www.geeksforgeeks.org/problems/second-largest3735/1

/* 
Brute Force Approch => Sort them and find second largest
                    => Time Complexity = O(nlogn + n)
*/

/* 
Better Approch => first find largest and find second largest
               => Time Complexity = O(2n)
*/

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
        int secondmax = -1;
        
        for(int i=1;i<n; i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }

        for(int i = 0;i<n; i++){
            if(arr[i]>secondmax && arr[i] != largest) secondmax = arr[i];
        }
        return secondmax;
    }
};

// Optimal Approch 
// Time Complexity = O(n)
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = arr[0];
        int secondmax = -1;
        
        for(int i=1;i<n; i++){
            if(arr[i]>largest){
                secondmax = largest;
                largest = arr[i];
            }
            if(arr[i]>secondmax && arr[i] != largest) secondmax = arr[i];
        }
        
        return secondmax;
    }
};