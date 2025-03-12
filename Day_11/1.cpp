//q-1: https://leetcode.com/problems/pascals-triangle/description/
//Approach : Using two loops, stored the required row of the pascal traingle by the general fact that an element at (i,j) is a sum of elements at (i-1,j) and (i-1,j-1)
//TC : O(numRows^2) 
//SC : O(1) 
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>>v;
    for(int i=0;i<numRows;i++){
        vector<int>a(i+1);
        v.push_back(a);
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v;
    }
};