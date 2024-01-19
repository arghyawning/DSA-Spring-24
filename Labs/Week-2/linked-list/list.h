//
// Created by Prakul Agrawal on 1/13/24.
//

#ifndef DSA_TAS_SPRING_24_LIST_H
#define DSA_TAS_SPRING_24_LIST_H

typedef struct node {
    int data;
    struct node *next;
} node;

node *createNode(int data);

void insertAtEnd(node **head, int data);

void insertAtBeginning(node **head, int data);

void insertAtPosition(node **head, int data, int position);

void deleteAtEnd(node **head);

void deleteAtBeginning(node **head);

void deleteAtPosition(node **head, int position);

void printList(node *head);

#endif //DSA_TAS_SPRING_24_LIST_H
