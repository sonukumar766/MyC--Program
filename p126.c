// print the number of constants in the string
#include <stdio.h>
int main()
{
    char str[100];

    int i = 0, cnt = 0;

    printf("Enter your string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        if (str[i] != 'a' || str[i] != 'A' || str[i] != 'e' || str[i] != 'E' || str[i] != 'i' || str[i] != 'I' || str[i] != 'u' || str[i] != 'U' || str[i] != 'o' || str[i] != 'O')
        {
            cnt++;
        }
        i++;
    }
    printf("Number of constant = %d", cnt);
    return 0;
}