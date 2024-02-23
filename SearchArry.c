#include <stdio.h>

int main()
{

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int start = 0, end = n, mid;
    int k;

    printf("Element want to search in array : ");
    scanf("%d", &k);

    int avail = 0;

    while (start < end)
    {

        mid = start + end / 2;

        if (arr[mid] == k)
        {
            avail = 1;

            printf("%d is available in array at %d index", k, mid);
            break;
        }
        if (arr[mid] < k)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }

    if (avail)
    {
        printf("available");
    }
    else
    {
        printf("Not available");
    }

    return 0;
}