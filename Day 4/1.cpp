//Question_1 : https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math
//Approach : Except 0 and 1, all the other numbers till the target number would give 1 on modulo operation with that number
//TC : O(1);
//SC : O(1)
class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        return n-1;
    }
};