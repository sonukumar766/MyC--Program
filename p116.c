// finding the length of string in c
#include <stdio.h>
int main()
{
    int i;

    char s[20];
    printf("Enter your string: ");
    scanf("%s", s);

    for (i = 0; s[i] != '\0', ++i ) ;
    printf("Length of string is %d", i);
    return 0;
}