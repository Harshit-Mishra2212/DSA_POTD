//q-1 : https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
//Approach : Stored positive and negative elements in 2 different vectors then combined according to the given conditions in nums
//TC : O(n)
//SC : O(n)
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0) a.push_back(nums[i]);
            else b.push_back(nums[i]);
        }
        int i=0;
        int j=0;
        int k=0;
        while(i<a.size() && j<b.size()){
            nums[k++]=a[i++];
            nums[k++]=b[j++];
        }
        return nums;
    }
};