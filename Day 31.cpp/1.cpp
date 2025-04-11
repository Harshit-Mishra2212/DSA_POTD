Q1: Leetcode 203 - Remove linked list elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*temp = head;
        while(temp){
            while(temp && temp->next && temp->next->val == val){
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }
        if(head!=NULL && head->val!=val) return head;
        else if(head!=NULL && head->val == val) return head->next;
        else return head;
    }
};