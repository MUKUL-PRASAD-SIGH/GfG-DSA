/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node *temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        if(k>cnt) return -1;
        if(k==cnt) {
            return head->data;
        }
        int ans=cnt-k;
        temp=head;
        for(int i=0;i<ans-1;i++){
                temp=temp->next;
        }
        //Node *delnode=temp->next;
        //temp->next=temp->next->next;
        //delete delnode;
        
        return temp->next->data;
    }
};