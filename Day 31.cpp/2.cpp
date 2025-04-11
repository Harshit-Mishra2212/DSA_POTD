Q : Leetcode 2 - Add two numbers
class Solution {
public:
    void insertAtEnd(ListNode* head, int n){
        ListNode* temp = head;
        ListNode* nn = new ListNode(n);
        while(temp->next){
            temp = temp->next;
        }
        temp->next = nn;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* nn = new ListNode(-1);
        ListNode* nhead = nn;

        int sum = temp1->val + temp2->val;
        int carry = sum / 10;
        nn->val = sum % 10;

        temp1 = temp1->next;
        temp2 = temp2->next;

        while(temp1 && temp2){
            sum = temp1->val + temp2->val + carry;
            carry = sum / 10;
            insertAtEnd(nhead, sum % 10);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp1){
            sum = temp1->val + carry;
            carry = sum / 10;
            insertAtEnd(nhead, sum % 10);
            temp1 = temp1->next;
        }

        while(temp2){
            sum = temp2->val + carry;
            carry = sum / 10;
            insertAtEnd(nhead, sum % 10);
            temp2 = temp2->next;
        }

        if(carry){
            insertAtEnd(nhead, carry);
        }

        return nhead;
    }
};