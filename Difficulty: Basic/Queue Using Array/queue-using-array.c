#include <stdlib.h>

struct myQueue {
    int* arr;
    int capacity;
    int size;
};

struct myQueue* createQueue(int n) {
    struct myQueue* q = malloc(sizeof(struct myQueue));

    q->arr = malloc(n * sizeof(int));
    q->capacity = n;
    q->size = 0;

    return q;
}

int isEmpty(struct myQueue* q) {
    if (q->size == 0)
        return 1;

    return 0;
}

int isFull(struct myQueue* q) {
    if (q->size == q->capacity)
        return 1;

    return 0;
}

void enqueue(struct myQueue* q, int x) {
    if (isFull(q))
        return;

    q->arr[q->size] = x;
    q->size++;
}

void dequeue(struct myQueue* q) {
    if (isEmpty(q))
        return;

    for (int i = 0; i < q->size - 1; i++) {
        q->arr[i] = q->arr[i + 1];
    }

    q->size--;
}

int getFront(struct myQueue* q) {
    if (isEmpty(q))
        return -1;

    return q->arr[0];
}

int getRear(struct myQueue* q) {
    if (isEmpty(q))
        return -1;

    return q->arr[q->size - 1];
}