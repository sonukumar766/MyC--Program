// member function template in c++
#include<iostream>
using namespace std;

template<class T>
class Sonu{
    T age;
    public:
    Sonu(T data){
        age=data;
    }

    void printAge();
};

template<class T>
void Sonu<T>:: printAge(){
    cout<<"Your age is "<<age<<endl;
}

// driver code
int main(){
    Sonu<int>s(22);
    s.printAge();

    return 0;
}