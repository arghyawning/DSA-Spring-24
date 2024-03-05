#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

void push(queue* q, int data)
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    if(q->head == NULL && q->tail == NULL)
    {
        q->head = q->tail = temp;
        q->size += 1;
        return;
    }
    q->tail->next = temp;
    q->tail = temp;
    q->size += 1;
    return;   
}

int pop(queue* q)
{
    if(q->head == NULL)
    {
        printf("Queue is Empty !!\n");
        return -1;
    }
    if(q->head == q->tail){
        int data = q->head->data;
        free(q->head);
        q->head = q->tail = NULL;
        q->size -= 1;
        return data;
    }
    node* temp = q->head;
    q->head = q->head->next;
    int data = temp->data;
    free(temp);
    q->size -= 1;
    return data;    
}

void display(queue *q){
    node* temp = q->head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int front(queue* q)
{
    if(q->head == NULL)
    {
        printf("Queue is Empty !!\n");
        return -1;
    }
    return q->head->data;
}

int back(queue* q)
{
    if(q->tail == NULL)
    {
        printf("Queue is Empty !!\n");
        return -1;
    }
    return q->tail->data;
}

int size(queue* q)
{
    return q->size;
}