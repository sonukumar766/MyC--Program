// member template function in c++
#include<iostream>
using namespace std;

template<class T>

class Data{
    T a;
    public:
    Data(T a1){
        a=a1;
    }
    void display();
};

template<class T>
void Data<T>:: display(){
    cout<<a<<endl;
}

int main(){

    Data<float>d1(12.34);
    d1.display();
    
    return 0;
}