/*
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here{
        if(head==NULL || head->next==NULL) return head;

        Node *prev=NULL;
        while(head!=NULL)
        {
           
            Node *temp=head->next;
            head->next=prev;
            prev = head;
            head = temp;
        }
        

    return prev;
        
    }
        
    
};
