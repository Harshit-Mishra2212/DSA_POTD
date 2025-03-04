//Question-2 : https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=problem-list-v2&envId=2030iluv 

//Approach : Traversed in the whole 2D vector and compared every element with previous ones to check domino pair

//TC : O(n^2)
//SC : O(1)

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
       int m = dominoes.size();
       int count = 0;
       for(int i=0;i<m;i++){
        int a = dominoes[i][0];
        int b = dominoes[i][1];
        for(int j=i+1;j<m;j++){
            int c = dominoes[j][0];
            int d = dominoes[j][1];
            if((a==c && b==d) || (a==d && b==c)) count++;
        }
       }
       return count;
    }
};