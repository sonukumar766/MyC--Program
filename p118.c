// read the sentence in c++ and print that sentence on the console window
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
    char str[100];
    printf("Enter the sentence: ");
    fgets(str, MAX, stdin);
    printf("The enterd sentence is %s", str);
    return 0;
}