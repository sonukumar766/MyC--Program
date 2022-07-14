// convert lowercase to uppercase in c
#include<stdio.h>
#include<ctype.h>
int main(){

    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);
    printf("The original string is: %s \n", str);
    for(int i=0;str[i]!='\0';i++){
        str[i]=toupper(str[i]);
    }
    printf("The updated string is: %s\n", str);
    return 0;

}