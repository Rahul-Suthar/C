#include<stdio.h>
#include<stdlib.h>

void quicksort(int *arr,int s, int e);
int partition(int *arr, int s, int e);

int main()
{
    int n;
    printf("enter size of array : ");
    scanf("%d",&n);

    int *arr = (int *)calloc(n,sizeof(int));
    printf("Enter array's element : ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);

    printf("Sorted array is : ");

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }

    free(arr);

    return 0;
}

void quicksort(int *arr, int s, int e){

    if(s<e){
        int loc = partition(arr,s,e);
        quicksort(arr,s,loc-1);
        quicksort(arr,loc+1,e);
    }
}

int partition(int *arr, int s, int e){
    int p = arr[s];
    int start = s+1;
    int end = e;

    while(start<=end){
        // to  find element larger than pivot
        while(arr[start] <= p){
            start++;
        }
        // to find element smaller than pivot
        while(arr[end] > p){
            end--;
        }
        if(start<end){
            //  to swap start and end elements
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    int swap = arr[s];
    arr[s] = arr[end];
    arr[end] = swap;

    return end;
}