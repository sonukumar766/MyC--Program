// allocating the dynamic memeory using the malloc() function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the number of entegers");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory is not available");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter the integer: ");
        scanf("%d", (ptr + i));
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}