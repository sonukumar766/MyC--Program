// find the minmum and maximum  digits in the given number
#include<stdio.h>
int main(){

    int a=1234556;
    int max=0;
    int min=99999999;

    while(a!=0){
        int b=a%10;
        if(b>max)
          max=b;
        if(b<min)
          min=b;

        a=a/10;
    }
    printf("Min: %d and Max: %d", min, max);
    return 0;
}