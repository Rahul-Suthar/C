#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void traverse(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

struct Node* insertAtBeginning(struct Node* head,int data){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = head;

    return p;
}

void insertAtIndex(struct Node* ptr, int data, int index){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = NULL;

    int i=0;
    while(i<index-1){
        ptr = ptr->next;
        i++;
    }

    p->next = ptr->next;
    ptr->next = p;
}

void insertAtEnd(struct Node* ptr,int data){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = NULL;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = p;
}

struct Node* deleteAtBeginning(struct Node* ptr){
    struct Node* p = ptr;
    
    ptr = ptr->next;
    free(p);

    return ptr;
}

void deleteAtIndex(struct Node* ptr, int index){
    struct Node* p = ptr;
    struct Node* q = NULL; 

    int i = 0;
    while(i<index-1){
        q = p;
        p = p->next;
        i++;
    }

    q->next = p->next;
    free(p);
}

void deleteAtEnd(struct Node* ptr){
    struct Node* p = ptr;

    while(p->next->next != NULL){
        p = p->next;
    }

    free(p->next);
    p->next = NULL;
}
