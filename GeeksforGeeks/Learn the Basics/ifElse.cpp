https://www.geeksforgeeks.org/problems/java-if-else-decision-making0924/1

// User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m) {
        // code here
        string s;
        if(n<m) s = "lesser";
        else if(n==m) s = "equal";
        else s = "greater";
        return s;
    }
};