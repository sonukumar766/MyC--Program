// find the sum of the all digits of the given number
#include <stdio.h>
int main()
{
    int a = 12234567;

    int sum = 0;

    while (a != 0)
    {
        sum += (a % 10);
        a = a / 10;
    }
    printf("The sum of the all digits is %d", sum);
    return 0;
}