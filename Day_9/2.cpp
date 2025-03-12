//Approach : first found count of 0s, 1s and 2s and then traversed in the vector to keep them at place according to the count obtained
//TC : O(n)
//SC : O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int noz=0;
        int noo=0;
        int notw=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            if(nums[i]==1) noo++;
            if(nums[i]==2) notw++;
        }
        for(int i=0;i<n;i++){
            if(i<noz) nums[i]=0;
            else if(i<(noz+noo)) nums[i]=1;
            else nums[i]=2;
        }
        return;
    }
};