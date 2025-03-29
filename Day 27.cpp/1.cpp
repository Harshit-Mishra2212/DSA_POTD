class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head==NULL || head->next==NULL) return head;
        DLLNode* curr = head;
        DLLNode* last = NULL;
        while(curr){
            last = curr->prev;
            curr->prev = curr->next;
            curr->next = last;
            curr = curr->prev;
        }
        return last->prev;
    }
};