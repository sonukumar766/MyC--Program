// finding the character in the string which is on the odd position in the string
#include <stdio.h>
int main()
{
    int i = 0;
    char s[100];
    printf("Enter your string: ");
    scanf("%s", s);

    for (i; s[i] != '\0'; i++)
        ;
    for (int j = 0; j < i; j++)
    {
        if ((j + 1) % 2 == 1)
        {
            printf("%c\n", s[j]);
        }
    }
    return 0;
}