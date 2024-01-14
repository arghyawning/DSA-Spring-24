//
// Created by Prakul Agrawal on 1/13/24.
//

#include "stdio.h"

#include "list.h"

int main() {
    node *head = NULL;
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 4);
    insertAtPosition(&head, 5, 2);
    printList(head);
    deleteAtEnd(&head);
    deleteAtBeginning(&head);
    deleteAtPosition(&head, 1);
    printList(head);
    return 0;
}