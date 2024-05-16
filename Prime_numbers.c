#include <stdio.h>

int main()
{
    printf("\t\t\t\tTo find prime number from 0 to N\n");

    int number, k = 0;

    printf("Enter number : ");
    scanf("%d", &number);

    if (number < 2)
    {
        printf("No prime number found\n");
        return 0;
    }

    printf("\n");

    for (int i = 2; i <= number; i++)
    {

        int isprime = 1;

        for (int j = 2; j <= sqrt(i); j++)
        {

            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime)
        {
            printf("%d, ", i);
            k++;
        }
    }

    printf("\n\ntotal prime numbers are : %d\n", k);

    return 0;
}