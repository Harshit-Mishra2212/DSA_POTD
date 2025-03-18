Question_3 : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
TC : O(n*logmx)
SC : O(1)
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int mx = -1;
        for(int i=0; i<n; i++){
            mx = max(mx,nums[i]);
        }
        int lo = 1;
        int hi = mx;
        int ans = -1;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += (nums[i] + mid-1) / mid;  
            }
            if(sum <= threshold){
                ans = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        return ans;
    }
};