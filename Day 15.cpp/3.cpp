Question_3 : https://leetcode.com/problems/search-a-2d-matrix-ii/description/
TC : O(m+n)
SC : O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
            int i=0;
            int j=n-1;
            while(i<m && j>=0){
                if(matrix[i][j]==target) return true;
                else if(matrix[i][j]>target) j--;
                else i++;
            }
            return false;
        }
    
};