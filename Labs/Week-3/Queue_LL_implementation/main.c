#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// typedef struct queue queue;

int main(){

    queue* q = (queue*)malloc(sizeof(queue));
    q->head = q->tail = NULL;

    push(q, 10);
    push(q, 20);
    push(q, 30);
    display(q);
    printf("Front: %d\n", front(q));
    printf("Back: %d\n", back(q));
    pop(q);
    display(q);
    pop(q);
    pop(q);
    pop(q);
    push(q, 10);
    push(q, 20);
    display(q);
}