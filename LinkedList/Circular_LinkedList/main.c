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

    int i=0;


//input for node's value ;
    for (int j = 0; j < n; j++)
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
        i++;
    }

    temp->next = head;

    traverse(head);

    int choice, c, index;
    printf("Enter your choice to insert(1) / delete(2) : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("At start(1) / index(2) / end(3) : ");
        scanf(" %d", &c);

        int data;

        switch (c)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);

            head = insertAtIndex(head, data,0);
            traverse(head);
            break;

        case 2:
            printf("Enter data and index: ");
            scanf("%d %d", &data, &index);

            head = insertAtIndex(head, data, index);
            traverse(head);
            break;

        case 3:
            printf("Enter data: ");
            scanf("%d", &data);

            head = insertAtIndex(head, data,n);
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
            head = deleteAtIndex(head,1);
            traverse(head);
            break;

        case 2:
            printf("Enter index : ");
            scanf("%d", &index);

            head = deleteAtIndex(head,index);
            traverse(head);
            break;  

        case 3:
            head = deleteAtIndex(head,n);
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