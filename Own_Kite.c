// code for kite pattern with our own choice of length...


#include <stdio.h>

int main()
{
    int i, j, x; // number of rows

    printf("Enter no. of rows : ");
    scanf("%d",&x);

    int n = (x+1)/2;  // For the upper half of the kite inlcuding the middle row which contain most of char like highest no. of it 
    int m = (x-1)/2;  // For the lower half of the kite excluding the middle row

    // To print the upper half of the  kite pattern

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if (i >= j)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // To print lower half of the kite pattern

    for (int i = m; i > 0; i--)
    {
        for (int j = m; j > 0; j--)
        {
            if (j <= i)
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}