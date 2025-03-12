//Q : https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/
//TC : O(NlogN)
//SC : O(1) 
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
      for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i][0]==nums2[j][0]){
                    nums1[i][1]=nums1[i][1]+nums2[j][1];
                    nums2[j][0]=-1;
                }
            }}
            for (int i=0;i<nums2.size();i++){
                if(nums2[i][0]!=-1){
                nums1.push_back({nums2[i][0],nums2[i][1]});
                }
            }

            sort(nums1.begin(),nums1.end()); 
            return nums1 ;  
    }
};