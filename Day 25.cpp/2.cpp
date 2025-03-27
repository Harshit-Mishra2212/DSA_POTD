//Q: GFG Linked list insertion at end
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* temp = head;
        Node* a = new Node(x);
        if(head==NULL) return a;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = a;
        return head;
    }
};