#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define size 10

typedef struct stack { 
    int a[size];
    int top;
}stack;

void push(stack* p, int d ) {
if(p->top == size-1) {
    printf("OverFlow \n");
}
else {
    p->top ++;
    p->a[p->top] = d;
}
}

void pop(stack* p) {
    if(p->top == -1) {
        printf("UnderFlow \n");
    }
    else {
        p->top --;
    }
}

void traverse(stack p) {
    for(int i = p.top; i>=0; i--) {
        printf("%d ",p.a[i]);
    }
}

bool isFull(stack* p) {
    if(p->top != size-1) 
            return true;
        else
            return false;
}

bool isEmpty(stack* p) {
    if(p->top == -1)
        return true;
        else 
            return false;
}

int peek(stack* p) {
    return p->a[p->top];
}

int main() {
stack s;
s.top =  -1;

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    pop(&s);
    pop(&s);
    push(&s, 90);
    traverse(s);

    return 0;
}