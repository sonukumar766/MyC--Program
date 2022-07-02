// write a c program to reverse the number
#include <stdio.h>
int main()
{
    int a = 876544;
    int b = 0;

    printf("the number before reverse: %d\n", a);

    while (a != 0)
    {
        b = (b * 10) + (a % 10);
        a = a / 10;
    }
    printf("The number after reverse is %d", b);
    return 0;
}