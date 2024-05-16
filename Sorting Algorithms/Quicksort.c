#include <stdio.h>

int partition(int arr[], int s, int e)
{
    int x = arr[e];
    int i = s;

    for (int j = s; j < e; j++)
    {
        if (x >= arr[j])
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[e];
    arr[e] = temp;
    return (i + 1);
}

void QuickSort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);

        QuickSort(arr, s, p - 1);
        QuickSort(arr, p + 1, e);
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements of array: ");

    for (int k = 0; k < size; k++)
    {
        scanf("%d", &arr[k]);
    }

    QuickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    for (int k = 0; k < size; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}
