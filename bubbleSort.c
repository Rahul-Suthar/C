#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array : ");
    scanf("%d", &size);

    int Ar[size], temp;

    printf("Enter element of array : ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &Ar[i]);
    }

    // Bubble Sort algorithm

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (Ar[j] > Ar[j + 1])
            {
                // Swapping of elements
                temp = Ar[j];
                Ar[j] = Ar[j + 1];
                Ar[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", Ar[i]);
    }

    return 0;
}