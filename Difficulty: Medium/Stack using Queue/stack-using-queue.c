/* Queue implementation

#define MAX 1000   // Maximum queue capacity

struct Queue {
    int data[MAX];
    int front, rear, size;
};

The following queue functions are already implemented in the driver code:

void initQueue(struct Queue* q);      // Initializes the queue
int isEmptyQueue(struct Queue* q);    // Returns 1 if queue is empty, otherwise 0
void enqueue(struct Queue* q, int x); // Inserts x into the queue
int dequeue(struct Queue* q);         // Removes and returns the front element
int frontQueue(struct Queue* q);      // Returns the front element (-1 if empty)
int sizeQueue(struct Queue* q);       // Returns the current size of the queue
*/

// Implement Stack using a single Queue.
struct myStack {
    struct Queue q;
};

// Inserts x at the top of the stack.
void push(struct myStack* st, int x) {
    int n = sizeQueue(&st->q);

    enqueue(&st->q, x);

    for(int i = 0; i < n; i++) {
        enqueue(&st->q, dequeue(&st->q));
    }
}

void pop(struct myStack* st) {
    if(!isEmptyQueue(&st->q)) {
        dequeue(&st->q);
    }
}

int top(struct myStack* st) {
    if(isEmptyQueue(&st->q)) {
        return -1;
    }

    return frontQueue(&st->q);
}

int size(struct myStack* st) {
    return sizeQueue(&st->q);
}

void initStack(struct myStack* st) {
    initQueue(&st->q);
}