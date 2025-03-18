Question_1 : https://www.geeksforgeeks.org/problems/square-root/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=square-root
TC : O(logn)
SC : O(1)
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        int lo = 0;
        int hi = n;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            long long m = (long long)mid;
            long long y = (long long)n;
            if(m*m==y) return mid;
            else if(m*m>y) hi = mid-1;
            else lo = mid+1;
        }
        return hi;
    }
};