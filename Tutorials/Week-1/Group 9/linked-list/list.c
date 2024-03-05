//
// Created by Prakul Agrawal on 1/13/24.
//
#include "stdio.h"
#include "stdlib.h"

#include "list.h"

node *createNode(int data) {
    node *newNode = (node *) malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(node **head, int data) {
    node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtBeginning(node **head, int data) {
    node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtPosition(node **head, int data, int position) {
    node *newNode = createNode(data);
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    node *temp = *head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtEnd(node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    node *temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void deleteAtBeginning(node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteAtPosition(node **head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (position == 0) {
        node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    node *temp = *head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

void printList(node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}