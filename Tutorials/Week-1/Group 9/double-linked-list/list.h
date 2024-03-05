//
// Created by Prakul Agrawal on 1/13/24.
//

#ifndef DSA_TAS_SPRING_24_LIST_H
#define DSA_TAS_SPRING_24_LIST_H

typedef struct node {
    int data;
    struct node *next;
    struct node *prev;
} node;

node *createNode(int data);

void insertAtEnd(node **head, node **tail, int data);

void insertAtBeginning(node **head, node **tail, int data);

void insertAtPosition(node **head, node **tail, int data, int position);

void deleteAtEnd(node **head, node **tail);

void deleteAtBeginning(node **head, node **tail);

void deleteAtPosition(node **head, node **tail, int position);

void printList(node *head);

#endif //DSA_TAS_SPRING_24_LIST_H
