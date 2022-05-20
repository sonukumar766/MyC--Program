// reading unknown number of inputs in c++
#include<iostream>
using namespace std;

int main(){

    int sum=0, value=0;

    while(cin>>value){
        sum+=value; // same as sum=sum+value;
    }
    cout<<" sum = "<<sum<<endl;
    
    return 0;
}