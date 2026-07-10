/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        if(head==NULL) 
        { Node *nodee=new Node(x);
        return nodee;
        }
        Node *temp=head;
        for(int i=0;i<p;i++) temp = temp->next;
        
          Node* add=new Node(x);
              
            add->next = temp->next;
            add->prev = temp;
            if (temp->next != NULL)
            temp->next->prev = add;
            temp->next = add;
          
          
            
        
        return head;
        }
};