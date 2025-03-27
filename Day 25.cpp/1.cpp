//Q: Leetcode 237 Delete node in a linked list
class Solution {
public:
    void deleteNode(ListNode* target) {
        target->val = target->next->val;
        target->next = target->next->next;
        return;
    }
};