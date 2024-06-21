// this code is to find strong numbers :- a number whose all elements factorial's sum is  equal to that number
// like 145 = 1! + 4! + 5! = 1 + 24 + 120

#include <stdio.h>

int fact(int x);
int strong(int a);

// function to print alternative strong numbers.
void Alter_Strong(int n);

// function to print strong number in given range.
void Print_Strong(int n);

int main()
{
    // n is range upto we want num to find;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("Strong numbers : ",n);
    Print_Strong(n);

    printf("Alternate : ",n);
    Alter_Strong(n);

    return 0;
}

// to find factorial of each num;
int fact(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}

// to return a num like strong num;
int strong(int a)
{

    int y = 0;

    while (a > 0)
    {
        y += fact(a % 10);
        a = a / 10;
    }

    return y;
}

// alternative strong num;
void Alter_Strong(int n){
    int j = 1;

    for (int i = 1; i <= n; i++)
    {

        if (i == strong(i))
        {
            if (j % 2 != 0)
            {
                printf("%d ", i);
            }
            j++;
        }
    }
}

// to check if num is strong num or not if yes than it will be printed on terminal;
void Print_Strong(int n){

    for (int i = 1; i <= n; i++)
    {
        if (i == strong(i))
        {
           printf("%d ", i);
        }
    }
    printf("\n");
}