// Implimantation of Queue :- woeks on the principal of FIFO :- first in first out

#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r, size;
    int *arr;
};

// to insert values in queue;
void enqueue(struct queue *q, int a)
{
    if (q->r == q->size - 1)
    {
        printf("Queue is full");
    }
    else
    {
        q->arr[++q->r] = a;
    }
}

// to remove values from queue;

int dequeue(struct queue *q)
{
    if (q->f == q->r)
    {
        printf("Queue is empty");
        return -1;
    }
    else
    {
        return q->arr[++q->f];
    }
}

void traversal(struct queue *q)
{
    if (q->f == q->r)
    {
        printf("Queue is empty");
    }
    else
    {
        int i = q->f + 1;

        for (i; i <= q->r; i++)
        {
            printf("%d ", q->arr[i]);
        }
    }
}

int main()
{
    char c;
    int x;

    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter size of queue : ");
    scanf("%d", &q->size);

    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    printf("Enter element of queue : ");

    for (int j = 0; j < q->size; j++)
    {
        int u;
        scanf("%d", &u);
        enqueue(q, u);
    }

    printf("queue is : ");
    traversal(q);

    // taking user input whether we wants to delete element or not;

    printf("\nwant to delete elements : ");
    getchar();  //to consume new line character;
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("how many elements : ");
        scanf("%d", &x);

        printf("Dequeued elements : ");

        for (int i = 0; i < x; i++)
        {   
            int e = dequeue(q);
            if(e == -1){
                break;
            }
            printf("%d ", e);
        }
    }
    else
    {
        free(q->arr);
        free(q);
        return 0;
    }

    // printing queue after removal of elements;
    
    printf("\nModified queue is : ");
    traversal(q);

    free(q->arr);
    free(q);

    return 0;
}