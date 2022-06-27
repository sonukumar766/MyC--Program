// write a c program to print the number of vowels in the string
#include <stdio.h>
int main()
{
    int i = 0, cnt = 0;
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U' || str[i] == 'i' || str[i] == 'I')
        {
            cnt++;
        }
        i++;
    }
    printf("The number of vowels in string = %d", cnt);
    return 0;
}