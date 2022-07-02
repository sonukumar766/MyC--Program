// find the average of the all the digits of the number
#include<stdio.h>
int main(){
    int a=8976544;
    int cnt=0;
    int sum=0;
    double avg;
    while(a!=0){
        sum+=(a%10);
        a=a/10;
        cnt++;
    }
    printf("The number of digit in the number is %d\n", cnt);
    avg=(double)sum/cnt;
    printf("average = %.3lf", avg);
    return 0;
    
}