#include <stdio.h>


int fibonacci(int n)
{
    int a = 0, b = 1, next;

    printf("fibonacci series : ");
    for (int i = 1; i <= n; ++i)
    {
        printf("%d , ",a);
        next = a+b;
        a = b;
        b = next;
    }
    return 0;
}



int main() {
    int x;

    printf("Enter the number of terms: ");
    scanf("%d", &x);
    
    fibonacci(x);

    return 0;
}

