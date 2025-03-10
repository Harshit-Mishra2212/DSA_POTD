//Approach : using 2 loops traversed in the array and founf=d whuch two elements add up to become the required target
//TC : O(n^2)
//SC : O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
       int n = nums.size();
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){ 
                v.push_back(i);
                v.push_back(j);
            }
        }
       }
       return v; 
    }
};