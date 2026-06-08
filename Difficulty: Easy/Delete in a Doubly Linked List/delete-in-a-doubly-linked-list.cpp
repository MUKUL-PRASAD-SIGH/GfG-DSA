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
        Node* temp=head;
        // code here
        for(int i=1;i<x;i++)
        {
            temp=temp->next;
        }
        
        if(temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;

        if(temp->next != NULL)
            temp->next->prev = temp->prev;
        free(temp);
       return head; 
    }
    
};