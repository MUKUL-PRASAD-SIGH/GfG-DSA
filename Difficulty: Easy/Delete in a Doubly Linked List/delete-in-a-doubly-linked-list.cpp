/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        if(head==NULL || head->next==NULL) return NULL;
        Node* ref=head;
           if(x == 1){
            Node* temp = head;
            head = head->next;
            if(head) head->prev = NULL;
            delete temp;
            return head;
        }
        for(int i=0;i<x-1;i++){
            ref=ref->next;
        }
        if(ref->prev!=NULL){
        ref->prev->next=ref->next;
        }
        if(ref->next!=NULL){
        ref->next->prev=ref->prev;
        }
        delete ref;
        return head;
        //Node *temp=head;
        //head=head->next;
        //temp->next=NULL;
        
        
    }
    
};