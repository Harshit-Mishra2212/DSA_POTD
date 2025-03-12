//Question-1 : https://leetcode.com/problems/flipping-an-image/?envType=problem-list-v2&envId=array

//Approach : swapped each row of the 2D vector then toggled every 0s and 1s

//TC : O(mn)
//SC : O(1)

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m = image.size();
        int n = image[0].size();
        for(int k=0;k<m;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            swap(image[k][i],image[k][j]);
            i++;
            j--;
        }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==0) image[i][j]=1;
                else image[i][j]=0;
            }
        }
        return image;
    }
};
