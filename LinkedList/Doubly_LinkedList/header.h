#ifndef HEADER_H
#define HEADER_H

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void traverse(struct Node* p);

struct Node* insertAtBeginning(struct Node* head,int data);
void insertAtIndex(struct Node* ptr, int data, int index);
void insertAtEnd(struct Node* ptr,int data);

struct Node* deleteAtBeginning(struct Node* ptr);
void deleteAtIndex(struct Node* ptr, int index);
void deleteAtEnd(struct Node* ptr);

#endif