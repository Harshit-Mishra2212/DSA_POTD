//q-2: https://leetcode.com/problems/next-permutation/description/
//Approach : found the first decreasing element (pivot) from the right, swapped it with the smallest greater element after it, and then reversed the right part to get the next larger permutation. If no pivot is found, the array is the largest permutation, so it's reversed to the smallest.
//TC : O(N)
//SC : O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){   
            reverse(nums.begin(),nums.end());
            return;
        }
        reverse(nums.begin()+idx+1,nums.end());
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        swap(nums[idx],nums[j]);
        return;
    }
}; 