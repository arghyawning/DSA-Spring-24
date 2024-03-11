/// Data Structure for Queue (non-circular).

// Replace int with the type of data you want to store in the queue.
typedef int T;

typedef struct queue {
    T *data;
    int front;
    int rear;
    int size;
} queue;

queue *create_queue(int max_size) {
    queue *new_queue = (queue *) malloc(sizeof(queue));
    new_queue->data = (T *) malloc(max_size * sizeof(T));
    new_queue->front = -1;
    new_queue->rear = -1;
    new_queue->size = max_size;
    return new_queue;
}

void enqueue(queue *q, T data) {
    assert(q->rear < q->size - 1);
    q->data[++q->rear] = data;
}

T dequeue(queue *q) {
    assert(q->front < q->rear);
    return q->data[++q->front];
}