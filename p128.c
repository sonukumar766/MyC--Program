//
#include<stdio.h>
int main(){
    int n=0;
    printf("Enter the numbers of integers: ");
    scanf("%d", &n);

    int min=99999999;
    int max=0;

    int sum=0;
    double avg;

    for(int i=0;i<n;i++){
        int a=0;
        printf("Enter %d number: ", i+1);
        scanf("%d", &a);

        if(a>max)
          max=a;

        if(a<min)
          min=a;

        sum+=a;

        avg=(double)sum/n;

        
    }

    printf("\nMin = %d and Max = %d", min, max);
    printf("\n Average = %lf", avg);
    return 0;
}