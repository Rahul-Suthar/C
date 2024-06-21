// Implimantation of stack :- woeks on the principal of LILO :- last in last out

#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top ;
    int *arr;
};

int isfull(struct stack *p){
    if(p->top == p->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack *p){
    if(p->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

// to enter the elements 
void push(struct stack* p, int num){
    if(isfull(p)){
        printf("Stack is full\n");
    }
    else{
        p->arr[++p->top] = num;
    }
}

// to print all the elements of stack
void traverse(struct stack* p){
    for(int i=p->top; i>=0; i--){
        printf("%d ",p->arr[i]);
    }
    printf("\n");
}

// it gives top most element of stack
void peek(struct stack *p){
    if(isEmpty(p)){
        printf("Stack is empty\n");
    }
    else{
        printf("%d \n", p->arr[p->top]);
    }
}

// to remove the last element 
void pop(struct stack *p){
    if(isEmpty(p)){
        printf("Stack is empty\n");
    }
    else{
        printf("%d \n",p->arr[p->top--]);
    }
}

int main()
{
    struct stack *s;
    
    s = (struct stack*)malloc(sizeof(struct stack));
    
    
    s->top = -1;
    s->arr = (int *)malloc(s->size*sizeof(int));

    printf("Enter size of stack : ");
    scanf("%d",&s->size);

    printf("Enter stack element : ");
    for(int i=0; i<s->size; i++){
        int element ;
        scanf("%d",&element);
        push(s,element);
    }

    printf("Traversing stack :");
    traverse(s);

    printf("Peeking stack : ");
    peek(s);

    printf("Poped element of stack : ");
    pop(s);

    printf("Modified stack : ");
    traverse(s);
    
    return 0;
}