// To find the maximum number present in an array

#include <stdio.h>

int main()
{
    int x, max = 0;

    printf("Enter size of array : ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter element of array : ");

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < x; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
    }

    printf("\nlargest in given array is : %d", max);

    return 0;
}