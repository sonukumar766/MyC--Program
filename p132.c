// taking the floating point number from the user and compare the number before and after the decimal point
#include<stdio.h>
int main(){
    char str[50];
    int a=0;
    int before=0;
    int after=0;
    printf("Enter floating point number: ");
    scanf("%s", str);

    for(int i=0;str[i]!='\0';i++){

        if(str[i]!='.'){
            a=a*10 + (str[i] - '0');

        }
        if(str[i]=='.'){
            before=a;
            a=0;
        }

    }
    after=a;
    printf("number before decimal point is %d\n", before);
    printf("number after the decimal point is %d\n", after);
    if(before>after){
        printf("The number before decimal point is greater.\n");
    }
    else{
        printf("The number before decimal point is greater.\n");
    }
    return 0;
     
}