/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        
        Node *fast=head;
        Node *slow=head;
        while(fast!=NULL && fast->next!=NULL) 
        {
            fast=fast->next->next;
            slow=slow->next;
        
            if(slow==fast) 
            {   
                fast=fast->next;
                int count=1;
                while(slow!=fast) {
                    
                    count++;
                    fast=fast->next;
                    
                    
                }
                return count;
            }
        }
        return 0;
    }
};