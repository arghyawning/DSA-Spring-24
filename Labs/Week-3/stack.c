#include<stdio.h>
#include<stdlib.h> 
#define N 1000    // max size of stack       


struct stack{
    int contents[N];
    int size;
    int top;
};

void push(struct stack* s, int x)
{
    int num;
    if(s->top==N-1)
    {
        printf("Stack is Full !\n");
        return;
    }
    else {
        s->top++;
        s->contents[s->top]=x;
        s->size++;
        printf("%d was Inserted !\n",x);
    }
}

int pop(struct stack* s)
{
    int e;
    if(s->top==-1)
    {
        printf("Stack is Empty !!\n");
        return -1;
    }
    else {
        e=s->contents[s->top];
        printf("%d was Removed !\n",e);
        s->top--;
        s->size--;
        return e;
    }

}

void display(struct stack* s)
{
    int i;
    if(s->top==-1){
        printf("Nothing to Display !!\n");
        return;
    }
    else {
        // printf("\n");
        for(i=s->top;i>=0;i--)
            printf("%d ",s->contents[i]);
        printf("\n");
    }
}

int topElement(struct stack *s){
    if(s->top==-1){
        printf("Stack is Empty !!\n");
        return -1;
    }
    else {
        return s->contents[s->top];
    }
}

int size(struct stack* s){
    return s->size;
}

int main()
{
    struct stack* s= (struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=0;

    push(s, 1);
    push(s, 2);
    push(s, 3);
    display(s);
    int x = pop(s);
    printf("x = %d\n", x);
    display(s);
    printf("top = %d\n", topElement(s));
    display(s);
}

