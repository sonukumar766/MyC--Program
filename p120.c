// count the words in sentence in c program
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{

    int i = 0, totalwords = 0;
    char sen[100];
    printf("Enter your sentence here: ");
    fgets(sen, MAX, stdin);
    while (sen[i] != '\0')
    {
        if (sen[i] == ' ')
            totalwords = totalwords + 1;

        i++;
    }
    printf("Number of words in sentence = %d", totalwords + 1);
    return 0;
}