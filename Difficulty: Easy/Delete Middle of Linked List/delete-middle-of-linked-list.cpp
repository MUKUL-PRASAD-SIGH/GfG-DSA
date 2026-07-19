/* Node Structure
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* deleteMid(Node* head) {
        Node *slow=head;
        Node *fast=head->next;
        if(head==NULL || head->next==NULL) return NULL;
        //if(fast->next!=NULL){
        //fast=fast->next->next;}
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *del=slow->next;
        slow->next=slow->next->next;
        del->next=NULL;
        delete del;
        return head;
        
    
        // code here
        
    }
};