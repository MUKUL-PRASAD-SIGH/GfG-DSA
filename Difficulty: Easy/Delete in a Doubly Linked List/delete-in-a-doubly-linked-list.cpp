class Solution {
  public:
    Node* delPos(Node* head, int x) {
        
        Node* temp = head;
        int cnt = 1;
        
        while (temp != NULL && cnt < x) {
            temp = temp->next;
            cnt++;
        }
        
        if (temp == NULL)
            return head;
        
        // head node
        if (temp->prev == NULL) {
            head = temp->next;
            
            if (head != NULL)
                head->prev = NULL;
            
            delete temp;
            return head;
        }
        
        // tail node
        if (temp->next == NULL) {
            temp->prev->next = NULL;
            delete temp;
            return head;
        }
        
        // middle node — YOUR LOGIC
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        
        delete temp;
        
        return head;
    }
};