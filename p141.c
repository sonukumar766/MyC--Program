// write c program to convert the lowercase sentence to upper case sentence
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 1000
int main()
{

    char str[100];
    printf("Enter your sentence: ");
    fgets(str, MAX, stdin);
    printf("The original string is: %s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }
    printf("The updated string is: %s", str);
    return 0;
}