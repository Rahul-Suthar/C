// To check where the number lies (index) in array that their sum is 10 we can change it according to our own desire

#include <stdio.h>

int main()
{
    int arr[] = {6, 7, 2, 3, 4, 8};

    for (int i = 0; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            int x = arr[i] + arr[j];
            if (x == 10)
            {
                printf("sum 10 is at index %d and %d\n", i, j);
            }
        }
    }
    return 0;
}