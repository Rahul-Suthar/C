#include <stdio.h>
#include <math.h>
#include <conio.h>

int Quadratic(int a, int b, int c)
{
    float X, x, d;

    d = sqrt(b * b - 4 * a * c);

    X = (-b + d) / (2.0 * a);
    x = (-b - d) / (2.0 * a);

    if (X == x)
    {

        printf("Both roots are same : %0.3f", X);
    }
    else
    {
        printf("Roots are  : %0.3f   and   %0.3f", X, x);
    }

    return 0;
}

int main()
{
    int a, b, c;

    printf("Enter constants of Quadratic equation a , b & c : \n");
    scanf("%d%d%d", &a, &b, &c);

    if (b * b < 4 * a * c)
    {
        printf("Roots of this equation are imaginaray");
    }
    else
    {

        printf("Root of this equation are real\n");

        Quadratic(a, b, c);
    }

    return 0;
}