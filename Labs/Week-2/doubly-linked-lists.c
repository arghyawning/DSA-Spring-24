#include <stdio.h>
# include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
};

struct DoublyLinkedList{
    struct Node* head;
    struct Node* tail;
};

struct Node* createNode(int value){
    // allocate memory for the node
    // node.value -> value
    // node.next -> null
    // node.prev -> null
    // return node
}

struct DoublyLinkedList* createList(){
    // allocate memory for the list
    // list.head -> null
    // list.tail -> null
    // return list
}

DoublyLinkedList* add_front(DoublyLinkedList* list){
    //  Adding nodes to the doubly linked list from the front
    //     initialize/create the new node 

    //       **list is empty**
    //       if list.head is null or list.tail is null
    //         list.head -> node
    //         list.tail -> node
    //         return

    //       **list is not empty**
    //       node.next -> list.head
    //       list.head.prev -> node
    //       list.head -> node

    // return list
}   

DoublyLinkedList* add_back(DoublyLinkedList* list){
    //  Adding nodes to the doubly linked list from the back
    //     initialize/create the new node 

    //       **list is empty**
    //       if list.head is null or list.tail is null
    //         list.head -> node
    //         list.tail -> node
    //         return

    //       **list is not empty**
    //       node.prev -> list.tail
    //       list.tail.next -> node
    //       list.tail -> node

    // return list
} 

DoublyLinkedList* delete_front(DoublyLinkedList* list){
    //  Deleting node from the doubly linked list from the front

    //       **list is empty**
    //       no need to do anything

    //       if head == tail // one node
    //         head -> null
    //         tail -> null
    //         return

    //       **list is not empty**
    //       temp -> list.head
    //       list.head -> list.head.next
    //       list.head.prev -> null
    //       temp.next -> null
    //       free temp

    // return list
}

DoublyLinkedList* delete_back(DoublyLinkedList* list){
    //  Deleting node from the doubly linked list from the back

    //       **list is empty**
    //       no need to do anything

    //       if head == tail // one node
    //         head -> null
    //         tail -> null
    //         return

    //       **list is not empty**
    //       temp -> list.tail
    //       list.tail -> list.tail.prev
    //       list.tail.next -> null
    //       temp.prev -> null
    //       free temp

    // return list
}

DoublyLinkedList* reverse(DoublyLinkedList* list){
    // head -> list.head
    // tail -> list.tail

    // if head is null or tail is null
    //   return list

    // if head == tail
    // return list

    // temp -> null
    // current -> head
    // while current is not null
        //  temp -> current.prev
        // current.prev -> current.next
        // current.next -> temp
        // current -> current.prev

    // list.head -> tail
    // list.tail -> head

    // return list
}