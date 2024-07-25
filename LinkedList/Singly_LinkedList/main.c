#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int n;
    printf("Numbers of Nodes to create : ");
    scanf("%d", &n);

    struct Node **h = (struct Node **)malloc(n * sizeof(struct Node *));
    struct Node *temp = NULL;
    struct Node *head = NULL;

//input for node's value ;
    for (int i = 0; i < n; i++)
    {
        h[i] = (struct Node *)malloc(sizeof(struct Node));

        printf("data : ");
        scanf("%d", &(h[i]->data));
        h[i]->next = NULL;

        if (head == NULL)
        {
            head = h[i];
        }
        else
        {
            temp->next = h[i];
        }

        temp = h[i];
    }

    traverse(head);

    int choice, c;
    printf("Enter your choice to insert(1) / delete(2) : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("At start(1) / index(2) / end(3) : ");
        scanf(" %d", &c);

        int data, index;

        switch (c)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);

            head = insertAtBeginning(head, data);
            traverse(head);
            break;

        case 2:
            printf("Enter data and index: ");
            scanf("%d %d", &data, &index);

            insertAtIndex(head, data, index);
            traverse(head);
            break;

        case 3:
            printf("Enter data: ");
            scanf("%d", &data);

            insertAtEnd(head, data);
            traverse(head);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

        break;

    case 2:
        printf("At start(1) / index(2) / end(3) : ");
        scanf(" %d", &c);

        switch (c)
        {
        case 1:
            head = deleteAtBeginning(head);
            traverse(head);
            break;

        case 2:
            printf("Enter index : ");
            scanf("%d", &index);

            deleteAtIndex(head,index);
            traverse(head);
            break;  

        case 3:
            deleteAtEnd(head);
            traverse(head);
            break;

        default:
            printf("Invalid choice\n");
            break;
        }

        break;

    default:
        printf("Invalid choice\n");
        break;
    }

// free memory allocated for nodes using malloc
    for (int i = 0; i < n; i++)
    {
        free(h[i]);
    }

    free(h);

    return 0;
}