#include<stdio.h>
#include<math.h>

int average(int a)
{
    int i,b;
    float c=0.0;

    for(i=0;i<a;i++)
    {
        printf("Enter value : ");
        scanf("%d",&b);

        c+=b;

    }
    printf("\nAverage of above value's is %0.3f\n",(c/a));

    return 0;
}

int main ()
{
    int Term;

    printf("Enter terms : ");
    scanf("%d",&Term);

    printf("\n");

    average(Term);

    printf("\n");

    return 0;
}