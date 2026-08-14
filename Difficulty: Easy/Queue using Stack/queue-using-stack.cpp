class myQueue {
    struct Node {
        int data;
        Node* next;

        Node(int x) {
            data = x;
            next = nullptr;
        }
    };

    Node* frontNode;
    Node* rearNode;
    int count;

public:
    myQueue() {
        frontNode = nullptr;
        rearNode = nullptr;
        count = 0;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);

        if (rearNode == nullptr) {
            frontNode = rearNode = newNode;
        } 
        else {
            rearNode->next = newNode;
            rearNode = newNode;
        }

        count++;
    }

    void dequeue() {
        if (frontNode == nullptr)
            return;

        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode == nullptr)
            rearNode = nullptr;

        delete temp;
        count--;
    }

    int front() {
        if (frontNode == nullptr)
            return -1;

        return frontNode->data;
    }

    int size() {
        return count;
    }
};