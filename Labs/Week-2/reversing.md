# Reversal of Linked List

Try on your own: https://leetcode.com/problems/reverse-linked-list/

### Iterative Approach

```c
while(curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
```

### Recursive Approach

```c
revhead=head;
if(head->next){
    revhead=reverseList(head->next);
    head->next->next=head;
}
head->next=NULL;
return revhead;
```
