Q2: https://leetcode.com/problems/longest-common-prefix/description/ 
Approach : Sorted the string vector and stored the first and last string element in separate strings...due to sorting, only ith element of first and last string is needed to be compared...if they are equal then stored the ith element in an empty string and then returned it in the end
TC : O(nlogn)
SC : O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];
        string s = "";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]){
                s += first[i];
            }
            else return s;
        }
        return s;
    }
};