// sorting the array in the asceding order
#include <stdio.h>
int main()
{
    int arr[] = {11, 10, 7, 4, 1, 20, 15};
    int size = sizeof(arr) / sizeof(arr[3]);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
            }
        }
    }
    printf("The sorted array is: ");
    for(int i=0;i<size;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}