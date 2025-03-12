//Question_2 : https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1 
//Approach : Sorted the vector then selected minimum of int_max and a[i]-a[j] using double pointers
//TC : O(m)
//SC : O(1)
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(),a.end());
        int i = 0;
        int j = m-1;
        int mn = INT_MAX;
        while(j<a.size()){
            mn = min(mn, a[j]-a[i]);
            j++;
            i++;
        }
        return mn;
    }
};