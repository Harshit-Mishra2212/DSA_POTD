Question_2 : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
Approach : Found pivot index using binary search which holds the minimum element itself
TC : O(logN)
SC : O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
       int lo = 0;
       int hi = n-1;
       int pivot = -1;
       if(n==2){
        if(nums[0]<nums[1]) return nums[0];
        else return nums[1];
       }
       while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid == 0) lo = mid+1;
        else if(mid == n-1) hi = mid-1;
        else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
            pivot = mid;
            break;
        }
        else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            pivot = mid+1;
            break;
        }
        else if(nums[mid]>nums[hi]) lo = mid+1;
        else hi = mid-1;
       }
       if(pivot == -1) return nums[0];
       return nums[pivot];
    }
};