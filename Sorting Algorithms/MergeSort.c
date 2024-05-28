#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int s, int m, int e);
void mergesort(int *a, int l, int r);

int main()
{
    int x;
    printf("Enter size of array : ");
    scanf("%d", &x);

    int *a = (int*)calloc(x,sizeof(int));

    printf("Enter elements of array : ");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, x - 1);

    printf("Sorted array : ");

    for (int i = 0; i < x; i++)
    {
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}

void mergesort(int *a, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

void merge(int *a, int s, int m, int e)
{
    int i = s, j = m + 1, k = 0;
    int *temp = (int*)calloc((e-s+1),sizeof(int));

    while (i <= m && j <= e)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }

    while (i <= m)
    {
        temp[k] = a[i];
        i++;
        k++;
    }

    while (j <= e)
    {
        temp[k] = a[j];
        j++;
        k++;
    }

    for (int t = s,k = 0; t <= e; t++,k++)
    {
        a[t] = temp[k];
    }

    free(temp);
}