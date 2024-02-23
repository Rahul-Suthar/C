#include<stdio.h>

int main()
{
    int N,sum;

    printf("Enter any integer :");
    scanf("%d",&N);

    sum = N*(N+1)/2;

    printf("Sum of Natural no. upto %d is : %d",N,sum);

    return 0;
}