//Question_1 : https://leetcode.com/problems/binary-search/description/
//Approach : Initialised two pointers lo and hi at two ends of nums, then moved them according to the need by removing the parts of nums where target cant be found
//TC : O(logn)
//SC : O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo= 0;
        int hi = nums.size()-1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if (nums[mid]>target) hi = mid-1;
            else lo = mid+1;
        }
        return -1;
    }
};