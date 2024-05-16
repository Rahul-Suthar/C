#include <stdio.h>
#include <string.h>

char highfrequency(char str[]);

int main()
{
    char str[100];
    fgets(str, 100, stdin);

    char highfreqchar = highfrequency(str);

    printf("Most occured char is : %c\n", highfreqchar);

    return 0;
}
// This function will return the character which is repeating many time in a string

char highfrequency(char str[])
{
    int count[256] = {0}; // as the ascii value of char vary from  0-256 also the value will work as index for that char
    int maxcount = 0;
    char highfreqchar;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count[(int)str[i]]++; // update the value on index for that char to check how many times it's occuring in string
        if (count[(int)str[i]] > maxcount)
        {
            maxcount = count[(int)str[i]]; // store the max no. of repeating
            highfreqchar = str[i];         // along with no. it wil store the  char which is repeating many times in string
        }
    }

    return highfreqchar;
}