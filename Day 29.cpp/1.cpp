//Q : Count nodes in an LL cycle
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        if (!head) return 0;

        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                int count = 1;
                Node* temp = slow->next;
                while (temp != slow) { 
                    count++;
                    temp = temp->next;
                }
                return count;
            }
        }
        return 0;
    }
};