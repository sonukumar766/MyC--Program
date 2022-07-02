// find the even sum and odd sum  of digits of number
#include <stdio.h>
int main()
{

    int a = 29774847;

    int b = 0;
    printf("Number is %d", a);

    int even = 0, odd = 0;

    while (a != 0)
    {
        b = a % 10;

        if (b % 2 == 0)
            even += b;

        else
            odd += b;

        a = a / 10;
    }
    printf("\nEven sum = %d and Odd sum = %d", even, odd);
    return 0;
}