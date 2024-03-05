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
    newNode->prev = NULL;
    return newNode;
}

void insertAtEnd(node **head, node **tail, int data) {
    node *newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        *tail = newNode;
        return;
    }
    (*tail)->next = newNode;
    newNode->prev = *tail;
    *tail = newNode;
}

void insertAtBeginning(node **head, node **tail, int data) {
    node *newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newNode;
    }
    *head = newNode;
    if (*tail == NULL) {
        *tail = newNode;
    }
}

void insertAtPosition(node **head, node **tail, int data, int position) {
    node *newNode = createNode(data);
    if (position == 0) {
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        if (*tail == NULL) {
            *tail = newNode;
        }
        return;
    }
    node *temp = *head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
    if (newNode->next == NULL) {
        *tail = newNode;
    }
}

void deleteAtEnd(node **head, node **tail) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        *tail = NULL;
        return;
    }
    node *   = *tail;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    free(temp);
}

void deleteAtBeginning(node **head, node **tail) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        *tail = NULL;
        return;
    }
    node *temp = *head;
    *head = (*head)->next;
    (*head)->prev = NULL;
    free(temp);
}

void deleteAtPosition(node **head, node **tail, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (position == 0) {
        node *temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        if (*head == NULL) {
            *tail = NULL;
        }
        return;
    }
    node *temp = *head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
    if (temp2->next != NULL) {
        temp2->next->prev = temp;
    }
    free(temp2);
    if (temp->next == NULL) {
        *tail = temp;
    }
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