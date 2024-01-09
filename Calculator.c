#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
{
    int a,b;
    float c;
    char ch;

    printf("Enter operator (+,-,*,/,%)\n");
    scanf("%c",&ch);

    printf("Enter values of a & b :\n");
    scanf("%d%d",&a,&b);

    switch (ch)
    {    
        case '+' : c = (a + b);
            printf("Addition is : %0.2f",c);
            break;
    
        case '-' : c = (a - b);
            printf("Substraction is : %0.2f",c);
            break;

        case '*' : c = 1.0*a*b;
            printf("Multiplication is : %0.2f",c);
            break;

        case '/' : c = (a*1.0)/b;
            printf("Division is : %0.3f",c);
            break; 

        case '%' : c = (a%b)*1.0;
            printf("Reminder is : %0.2f",c);
            break;

        default:
            printf("invalid operator");
            break;
    }
    
    return 0;
}