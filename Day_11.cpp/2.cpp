//q-2: https://leetcode.com/problems/rotate-image/description/
//Approach : Transposed the matrix and then reversed each row
//TC : O(m^2)
//SC : O(1)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
       
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
               if(i>=j) swap(matrix[i][j],matrix[j][i]);
            }
        }
       for(int k=0;k<m;k++){
        int i=0;
        int j=m-1;
        while(i<=j){
             swap(matrix[k][i],matrix[k][j]);
             i++;
             j--;
        }
    }
    return;
    }
};