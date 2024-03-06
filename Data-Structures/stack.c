/// Data structure for Stack.

// Replace int with the type of data you want to store in the stack.
typedef T int;

typedef struct stack {
    T *data;
    int top;
} stack;

stack *create_stack(int max_size) {
    stack *new_stack = (stack *) malloc(sizeof(stack));
    new_stack->data = (T *) malloc(max_size * sizeof(T));
    new_stack->top = -1;
    return new_stack;
}

void push(stack *s, T data) {
    assert(s->top < s->size - 1);
    s->data[++s->top] = data;
}

T pop(stack *s) {
    assert(s->top > -1);
    return s->data[s->top--];
}