// finding the second largest element in the given array
#include <stdio.h>
int main()
{
    int arr[7] = {11, 10, 7, 4, 1, 20, 15};

    int first_max = 0;
    int second_max = 0;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > first_max)
        {
            first_max = arr[i];
        }
        if (arr[i] > second_max && arr[i] < first_max)
        {
            second_max = arr[i];
        }
    }
    printf("The second largest element in the array is %d", second_max);
    return 0;
}