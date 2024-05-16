// To check a if an element is present in the array or not if yes then how many times......

#include <stdio.h>

int main()
{
    int x;
    printf("Enter size of array: ");
    scanf("%d", &x);

    int arr[x];
    printf("Enter elements : ");

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    int y;
    printf("occurance number: "); // desired element you want to check
    scanf("%d", &y);

    int occur = 0;

    for (int i = 0; i < x; i++)
    {
        if (arr[i] == y)
        {
            occur++; // To get how many times its occuring
        }
    }

    if (occur)
    {
        printf("The number %d occur %d times", y, occur);
    }
    else
    {
        printf("The number %d does not occur", y);
    }

    return 0;
}