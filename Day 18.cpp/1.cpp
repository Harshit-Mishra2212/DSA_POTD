Q1: https://leetcode.com/problems/valid-anagram/description/
Approach : sorted both strings and then compared them for equality check...if equal return true else return false
TC : O(nlogn)
SC : O(1)
class Solution {
public:
    bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) return true;
    else return false;
    }
};