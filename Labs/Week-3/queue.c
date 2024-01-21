#include <stdio.h>
#include <math.h>
#include <string.h>

#define N 100

struct queue
{
    int contents[N];
    int front;
    int rear;
};


void initQueue(struct queue *q)
{
    // fill the code
    q->rear = -1;
    q->front = -1;
}

void enQueue(struct queue *q, int element)
{
    // fill the code
    if (q->front == (q->rear + 1) % N)
    {
        printf("Queue is full\n");
    }
    else
    {
        if (q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % N;
        q->contents[q->rear] = element;
    }
}

int deQueue(struct queue *q)
{
    // fill the code
    int r = -1000;
    if (q->front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        r = q->contents[q->front];
        if (q->front == q->rear)
            initQueue(q);
        else
            q->front = (q->front + 1) % N;
    }
    return r;
}

void display(struct queue q)
{
    int i;
    if (q.front == -1)
    {
        printf("{}}\n");
    }
    else
    {
        for (i = q.front; i != q.rear; i = (i + 1) % N)
        {
            printf("%d ", q.contents[i]);
        }
        printf("%d\n", q.contents[i]);
    }
}

int main()
{
    struct queue p;
    initQueue(&p);
    
    // enQueue(&p, 10);
    // enQueue(&p, 20);
    // enQueue(&p, 30);
    // display(p);
    // printf("%d\n", deQueue(&p));
    // printf("%d\n", deQueue(&p));
    // display(p);
    // deQueue(&p);
    // display(p);
    // enQueue(&p, 40);
    // display(p);

    return 0;
}