/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

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
    bool isPalindrome(Node *head) {
        //  code here
        if(head == NULL || head->next == NULL)
    return true;
        Node *slow=head;
        Node *fast=head;
        while(fast->next != NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *newHead=reverseList(slow->next);
        Node *first=head;
        Node *second=newHead;
        while(second!=NULL){
            if(first->data!=second->data) return false;
            first=first->next;
            second=second->next;
            
            
        }
        slow->next = reverseList(newHead);
        return true;
        
    }
};