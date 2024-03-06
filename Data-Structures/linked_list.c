/// Data structure for Singly Linked List.


// Replace int with the type of data you want to store in the linked list.
typedef T int;

typedef struct node {
    T data;
    struct node *next;
} node;

node *create_node(T data) {
    node *new_node = (node *) malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// Implement any necessary functions here.
