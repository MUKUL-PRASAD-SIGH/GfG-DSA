/* Structure of doubly linked list node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head==NULL || head->next==NULL) return head;
        Node *temp=head;
         while(temp!=NULL)
         {  Node *tempo=temp->prev;
            temp->prev=temp->next;
            temp->next=tempo;
            head=temp;
             temp=temp->prev;
             
             
         }
         return head;
    }
};