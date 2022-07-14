// write the c++ program to 
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char str1[100];
    cout<<"Enter your string: ";
    cin>>str1;
    cout<<"The original string is: "<<str1<<endl;

    int len = strlen(str1);
    for(int i=0;i<len;i++){
        str1[i]=toupper(str1[i]);

    }
    cout<<"The updated string is: "<<str1<<endl;
    
    return 0;
}