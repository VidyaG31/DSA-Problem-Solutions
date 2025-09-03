https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

// Brute Force Approch
// Time Complexity = O(n1logn + n2logn) + O(n1 + n2)
// Space Complexity = O(n1+n2) + O(n1+n2)

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        set<int>unionSet;
        for(int i = 0;i<n1;i++){
            unionSet.insert(a[i]);
        }
        for(int i = 0;i<n2;i++){
            unionSet.insert(b[i]);
        }
        vector<int> result;
        for(auto it: unionSet){
            result.push_back(it);
        }
        
        return result;
    }
};

// Optimal Approch
// Time Complexity = O(n1+n2)
// Space Complexity = O(n1+n2)


class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i = 0,j = 0;
        int n1 = a.size();
        int n2 = b.size();
        vector<int> result;
        while(i<n1 && j<n2){
        if(a[i] <= b[j] ){
            if(result.size() == 0 || result.back() != a[i]) result.push_back(a[i]);
            i++;
        }
        
        else if (a[i] > b[j]){
            if(result.size() == 0 || result.back() != b[j]) result.push_back(b[j]);
            j++;
        }
        }
        
        while(i<n1){
            if(result.size() == 0 || result.back() != a[i]) result.push_back(a[i]);
            i++;
        }
        
        while(j<n2){
            if(result.size() == 0 || result.back() != b[j]) result.push_back(b[j]);
            j++;
        }
        
        return result;
    }
};