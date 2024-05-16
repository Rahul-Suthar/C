// This code is to convert all the small letters into capital and capital into small letters

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter string : ");
    fgets(str, 100, stdin);

    int l = strlen(str);

    for (int i = 0; i < l; i++)
    {
        if (str[i] <= 'Z')
        {                 // To convert char into small
            str[i] += 32; // cause difference b/w 'a' and 'A' is 32 also known as small to capital diff...
        }
        else if (str[i] >= 'a')
        {
            str[i] -= 32; // To convert char into capital
        }
    }

    puts(str); // return the modified string

    return 0;
}