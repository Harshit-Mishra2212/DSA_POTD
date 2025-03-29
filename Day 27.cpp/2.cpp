class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(!head) return NULL;
        Node* temp = head;
        if(x==1){
            head = temp->next;
            if(head) head->prev = NULL;
            temp->next = NULL;
            return head;
        }
        int n = 0;
        while(temp){
            temp=temp->next;
            n++;
        }
        temp = head;
        if(x==n){
            while(temp->next){
            temp=temp->next;
            }
            temp->prev->next = NULL;
            temp->prev = NULL;
            return head;
        }
        for(int i=1;i<=x-1;i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->next = NULL;
        temp->prev = NULL;
        return head;
    }
};