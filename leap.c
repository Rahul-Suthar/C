// To check weather a year is leap year or not.

#include <stdio.h>

void main()
{
    int year, isleap = 1;

    printf("Enter year : ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year < 2000)
        {
            isleap = 1;
        }
        else if (year % 4 < 100)
        {
            isleap = 0;
        }
        if (year % 400 == 0)
        {
            isleap = 1;
        }
        else
        {
            isleap = 1;
        }
    }

    else
    {
        isleap = 0;
    }

    if (isleap)
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}