// 1244.668 compare --> 1244 and 668 --<
#include <stdio.h>
int main()
{
    char str[50] = "1244.668";
    int a = 0;
    int after = 0;
    int before = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '.')
        {
            a = a * 10 + (str[i] - '0');
        }
        if (str[i] == '.')
        {
            before = a;
            a = 0;
        }
    }
    after = a;
    printf("before decimal point = %d\n", before);
    printf("After decimal point = %d\n", after);
    if (after > before)
    {
        printf("The number after the decimal point is greter.\n");
    }
    else
    {
        printf("The number before the decimal point is greter.\n");
    }
    return 0;
}