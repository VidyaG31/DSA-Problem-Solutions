https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        a = a+1;
        b = b+2;
        return {a,b};
    }
};