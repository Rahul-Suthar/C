// To remove all the blank spaces from a string

#include <stdio.h>
#include <string.h>

void rmBlankspc(char *str);

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str, 100, stdin);

    rmBlankspc(str);

    printf("Modified string is : %s", str);

    return 0;
}

void rmBlankspc(char *str)
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ') // To store the element without including the space in same string using different index to reduce memory
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}