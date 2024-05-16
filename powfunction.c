
#include <stdio.h>

// Here we are taking float data type so, we can also get their power via using this c code ;

float power(float a, float b);

int main()
{
    float a, b;

    printf("Enter number : ");
    scanf("%f", &b);

    printf("Enter power of number : ");
    scanf("%f", &a);

    printf("%0.0f Pow of %0.0f is : %0.2f\n", a, b, power(a, b));

    return 0;
}

float power(float a, float b)
{

    int s = 1;

    if (a == 1)
    {
        return b;
    }
    for (int i = 1; i <= a; i++)
    {
        s *= b;
    }

    return s;
}