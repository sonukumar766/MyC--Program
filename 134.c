// sorting the array in descending order
#include <stdio.h>
int main()
{
    int arr[7] = {11, 10, 7, 4, 1, 20, 15};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
    printf("The sorted array in descending order is: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
}