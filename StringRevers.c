#include<stdio.h>

int main()
{
    char s[] = "Samoul";
    char temp;

    // to find length of string without null character;
    int len = 0;

    while(s[len] != '\0'){
        len++;
    }

    // to reverse the string;
    for (int i=0; i < (len-1)/2; i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("%s",s);

    return 0;
}