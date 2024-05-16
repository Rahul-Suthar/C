#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int a[x];

    printf("Enter elements of array : ");

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n");

    for (int i = 0; i < x; i++)
    {
        for (int j = i; j < x; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d ", a[k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}