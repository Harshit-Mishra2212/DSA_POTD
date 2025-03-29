class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        Node* temp = head;
        int len = 0;
        while(temp){
            temp  = temp->next;
            len++;
        }
        temp = head;
        for(int i=1;i<=pos;i++){
            temp = temp->next;
        }
        Node* c = new Node(data);
        if(temp->next!=NULL){
            c->next = temp->next;
            temp->next->prev = c;
        }
        temp->next = c;
        c->prev = temp;
        return head;
    }
};