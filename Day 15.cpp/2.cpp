Question_2 : https://leetcode.com/problems/search-a-2d-matrix/
TC : O(log(m*n))
SC : O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int lo = 0;
        int hi = m*n - 1;
        while (lo<=hi) {
            int mid = lo + (hi-lo)/2;
            int midElement = matrix[mid/n][mid%n];

            if (midElement == target) return true;
            else if (midElement < target) lo = mid + 1;
            else hi = mid - 1;
        }
        
        return false;
    }
};