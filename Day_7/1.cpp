//Question_1 : https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy
//TC : O(N)
//SC : 0(1)

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int lastflower;
        int m=flowerbed.size();

        if(n==0) return true;

        if(m==1){
            if(flowerbed[0]==0 && n==1) return true;
            else return false;
        } 

        for(int i=0;i<=m-2;i++){
            if(count==n) return true;
            
            if(flowerbed[i]==1) lastflower=i;
            
            if(flowerbed[i]==0){
                if((i==0 && flowerbed[i+1]!=1)){
                    count++;
                    lastflower=i;
                    continue;
                }
                if(flowerbed[i+1]!=1 && lastflower!=i-1){
                    count++;
                    lastflower=i;
                }
            }
        }
        if(flowerbed[m-1]==0 && lastflower!=m-2){
            count++;
        }

        if(count==n) return true;
        else return false;

    }
};