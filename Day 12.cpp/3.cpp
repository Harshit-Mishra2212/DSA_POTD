//Question_3 : https://leetcode.com/problems/search-insert-position/description/ 
//Approach : Used binary search to search the target....if found then returned it if not then returned the index of lower bound +1 bcz that's where the target would have been if it was in nums
//TC : O(logN)
//SC : O(1)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target) {
            return mid;
            flag = true;
            break;
        }
        else if(nums[mid]<target) lo = mid+1;
        else hi = mid-1;
 }
    if(flag == false) return hi+1;
    return 0;
    }
};