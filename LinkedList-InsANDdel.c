#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node* del_beg(node* head) {
    if(head == NULL) {
        return head;
    }
    else    
        return head->next;
}

node* del_end(node* head) {
    node* p = head;
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    else {
        while(p->next->next != NULL) {
            p = p->next;
        }
        p->next = NULL;
    }
    return head;
}

node* del_atsomepoint(node* head, int target) {
    node* p = head;
    while(p->next->data != target) {
        p = p->next;
    }
    p->next = p->next->next; // simply ek aage khiska do jo target posn hai use bhula do hehe 
    return head;
}

node* rev(node* head) {
    node* cur = head, *prev = NULL, *t;
    cur = head;
    while(cur != NULL) {
        t = cur->next;;
        cur->next = prev;
        prev = cur;
        cur = t;
    }
    return prev;
}

node* ins_beg(node* head, int d) {
    node* n = (node*)malloc(sizeof(node));
    n->data = d; n->next = NULL;
    if(head == NULL)
            head = n;
        else {
            n->next = head;
            head = n;
        }
        return head;
}

node* ins_end(node* head, int d) {
    node* n = (node*)malloc(sizeof(node));
    n->data = d; n->next = NULL;
    if(head == NULL)
            head = n;
        else {
            node* p = head;
            while(p->next != NULL) {
                p = p->next;
            }
            p->next = n;
        }
    return head;
}

node* ins_atsomepoint(node* head, int d, int target) {
    node* n = (node*)malloc(sizeof(node));
    n->data = d; n->next = NULL;
    node* p = head;
    while(p->data != target) {
            p = p->next;
    }
    n->next = p->next;
    p->next = n;
        return head;
}

void traverse(node* head) {
    node* p = head;
    while(p != NULL) {
        printf("%d ",p->data);
        p = p->next;
    }
}

int main()
{
    node* head = NULL;
    
        head = ins_beg(head, 10);
        head = ins_beg(head, 20);
        head = ins_beg(head, 30);
        head = ins_end(head, 40);
        head = ins_atsomepoint(head, 50, 2);
        head = ins_beg(head, 60);
        head = del_beg(head);
        head = del_beg(head);
        head = ins_beg(head, 90);
        head = ins_atsomepoint(head, 100, 5);
        head = del_end(head);
        head = del_atsomepoint(head, 2);
        head = ins_beg(head, 10);
        head = ins_beg(head, 10);
    
            traverse(head);
    return 0;
}