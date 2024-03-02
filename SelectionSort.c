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

    // Selection Sort algorithm

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (Ar[i] > Ar[j])
            {
                // Swapping of elements
                temp = Ar[i];
                Ar[i] = Ar[j];
                Ar[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d", Ar[i]);
    }

    return 0;
}