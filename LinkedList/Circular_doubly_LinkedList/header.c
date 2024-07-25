#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void traverse(struct Node *head)
{
    struct Node *p = head;

    if (head != NULL)
    {
        printf("Forward: ");
        do
        {
            printf("%d ", p->data);
            p = p->next;
        } while (p != head);

        printf("\nBackward: ");
        p = head->prev;
        do
        {
            printf("%d ", p->data);
            p = p->prev;
        } while (p != head->prev);

        printf("\n");
    }
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node *p = head;
    if (index == 0)
    {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
        return newNode;
    }
    else
    {
        int i=0;
        while (i < index - 1)
        {
            p = p->next;
            i++;
        }

        newNode->next = p->next;
        newNode->prev = p;
        p->next->prev = newNode;
        p->next = newNode;

        return head;
    }
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = NULL;

    if (index == 1)
    {
        head->prev->next = head->next;
        head->next->prev = head->prev;
        if (head->next == head)
        {
            free(head);
            return NULL;
        }
        else
        {
            q = head->next;
            free(head);
            return q;
        }
    }
    else
    {
        int i=0;
        while (i < index - 1)
        {
            q = p;
            p = p->next;
            i++;
        }

        q->next = p->next;
        p->next->prev = q;

        free(p);
        return head;
    }
}
