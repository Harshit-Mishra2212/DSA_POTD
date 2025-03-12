//q-3: https://leetcode.com/problems/spiral-matrix/description/ 
//Approach : first iteratively moved right across the top row and then shifted the top boundary down. Then moved down along the rightmost column and reduced the right boundary. Then moved left across the bottom row and shifted the bottom boundary up. Then moved up along the leftmost column and increased the left boundary. And repeated this process until all elements were traversed.
//TC : O(m*n)
//SC : O(1)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int m = matrix.size();
      int n = matrix[0].size();
      int minr=0, minc=0;
      int maxr=m-1, maxc=n-1;
      int tne=n*m,count=0;
      vector<int>v;
      while(minr<=maxr && minc<=maxc){
        //right
        for(int j=minc;j<=maxc && count<tne;j++){
            v.push_back(matrix[minr][j]);
            count++;
        }
        minr++;
        //down
        for(int i=minr; i<=maxr && count<tne; i++){
            v.push_back(matrix[i][maxc]);
            count++;
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc && count<tne;j--){
            v.push_back(matrix[maxr][j]);
            count++;
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr && count<tne;i--){
            v.push_back(matrix[i][minc]);
            count++;
        }
        minc++;
    } 
    return v; 
    }
};