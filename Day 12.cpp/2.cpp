//Question_2 : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
//Approach : found first and last occurences using binary search 2 times and then pushed back in vector v if found...if not then pushed back -1,-1
//TC : O(logn)
//SC : O(1)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int n = nums.size();
        int lo = 0, hi = n - 1;
        bool flag = false;
        int first = -1;
        int last = -1;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                first = mid;
                hi = mid - 1;
                flag = true;
            } 
            else if (nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        lo = 0;
        hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) {
                last = mid;
                lo = mid + 1; 
                flag = true;
            } 
            else if (nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }

        if (flag) {
            v.push_back(first);
            v.push_back(last);
        } else {
            v.push_back(-1);
            v.push_back(-1);
        }
        return v;
    }
};