// c program to reversed the number
#include<stdio.h>
#include<math.h>
int main(){
    double a=1234.6666;
    double b=1234.0000;
    int e=a;
    int d = pow(10,4);

    int c = (a-b)*d;
   

    if(c>e){
        printf("fractional part is greater\n");
    }
    else{
        printf("%d\n", e);
    }
    return 0;
 
   


    

}