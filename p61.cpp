// Array of objects in c++
#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
    void setId(void){
        salary=20000;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }

    void getId(){
        cout<<"The id of employee is "<<id<<endl;
    }
};

// driver code
int main(){
    Employee fb[5];

    for(int i=0; i<5; i++){
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}