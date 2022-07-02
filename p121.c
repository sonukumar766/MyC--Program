// write  c program to reversed the string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], temp;
    int i = 0, j = 0;
    printf("Enter the string: ");
    scanf("%s", str1);

    j = strlen(str1) - 1;

    while (i < j)
    {
        temp = str1[j];
        str1[j] = str1[i];
        str1[i] = temp;
        i++;
        j--;
    }
    printf("the reversed string is %s", str1);
    return 0;
}