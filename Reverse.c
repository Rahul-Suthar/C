#include <stdio.h>

int main()
{
    int x;
    printf("Enter size of array : ");
    scanf("%d", &x);

    int ar[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }

    int temp;

    for (int i = 0, j = (x - 1); i < j; i++, j--)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }

    for (int i = 0; i < x; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}