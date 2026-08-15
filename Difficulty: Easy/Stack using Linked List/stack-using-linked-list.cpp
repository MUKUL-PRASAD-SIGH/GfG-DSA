class myStack {

    Node* topNode;
    int count;

public:

    myStack() {
        topNode = nullptr;
        count = 0;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);

        newNode->next = topNode;
        topNode = newNode;

        count++;
    }

    void pop() {
        if (topNode == nullptr)
            return;

        Node* temp = topNode;
        topNode = topNode->next;

        delete temp;
        count--;
    }

    int peek() {
        if (topNode == nullptr)
            return -1;

        return topNode->data;
    }

    int size() {
        return count;
    }
};