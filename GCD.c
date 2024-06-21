// To find greatest common divisor or H.C.F.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter x and y : ");
    scanf("%d%d", &x, &y);

    int gcd;

    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is : %d", x, y, gcd);

    return 0;
}