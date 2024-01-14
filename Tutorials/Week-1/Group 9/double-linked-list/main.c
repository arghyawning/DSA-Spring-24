//
// Created by Prakul Agrawal on 1/13/24.
//

#include "stdio.h"

#include "list.h"

int main() {
    node *head = NULL;
    node *tail = NULL;
    insertAtEnd(&head, &tail, 1);
    insertAtEnd(&head, &tail, 2);
    insertAtEnd(&head, &tail, 3);
    insertAtBeginning(&head, &tail, 4);
    insertAtPosition(&head, &tail, 5, 2);
    printList(head);
    deleteAtEnd(&head, &tail);
    deleteAtBeginning(&head, &tail);
    deleteAtPosition(&head, &tail, 1);
    printList(head);
    return 0;
}