/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
        Node* head=new Node(arr[0]);
        Node* temp=head;
        for(int i=1;i<arr.size();i++)
        {
            temp->next=new Node(arr[i]);
            temp=temp->next;
        }
        return head;
    }
};