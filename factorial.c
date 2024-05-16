#include <stdio.h>
#include <math.h>

int factorial(int n)
{
    int fac = 1, i;

    for (i = n; i > 0; i--)
    {

        fac = fac * i;
    }

    printf("Factorial of %d is : %d", n, fac);

    return 0;
}

int main()
{
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    factorial(n);

    return 0;
}