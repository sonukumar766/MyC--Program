// creating class to sum fisrt 100 number
#include<iostream>
using namespace std;

class Number{
    public:
    int N;

    void setValue(int newN){
        N=newN;
    }
    int getSum(){
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=i;
        }
        return sum;
    }

};

int main(void){
    Number n1;
    n1.setValue(100);
    cout<<"The sum of fist N number is "<<n1.getSum()<<endl;

}