#ifndef HEADER_H
#define HEADER_H

struct Node{
    int data;
    struct Node *next;
};

void traverse(struct Node* p);

struct Node* insertAtIndex(struct Node* ptr, int data, int index);

struct Node* deleteAtIndex(struct Node* ptr, int index);

#endif