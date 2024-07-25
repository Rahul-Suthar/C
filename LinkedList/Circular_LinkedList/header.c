#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void traverse(struct Node *p)
{
    struct Node *q = p;

    do
    {
        printf("%d ", q->data);
        q = q->next;
    } while (q != p);

    printf("\n");
}

struct Node *insertAtIndex(struct Node *ptr, int data, int index)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    struct Node *q = ptr;

    p->data = data;
    p->next = NULL;

    if (index == 0)
    {
        while (q->next != ptr)
        {
            q = q->next;
        }
        p->next = q->next;
        q->next = p;

        return p;
    }
    else
    {
        int i = 0;
        while (i < index - 1)
        {
            q = q->next;
            i++;
        }

        p->next = q->next;
        q->next = p;

        return ptr;
    }
}

struct Node *deleteAtIndex(struct Node *ptr, int index)
{
    struct Node *p = ptr;
    struct Node *q = NULL;

    if (index == 1)
    {   
        while (p->next != ptr)
        {
            p = p->next;
        }

        ptr = ptr->next;
        free(p->next);
        p->next = ptr;

        return ptr;
    }
    else
    {
        int i = 0;
        while (i < index - 1)
        {
            q = p;
            p = p->next;
            i++;
        }

        q->next = p->next;
    }

    free(p);
    return ptr;
}
