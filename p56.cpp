// static data member and static function memeber in c++
#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    static int count;
    void setId(){
        cout<<"Enter the id of the Employee"<<endl;
        cin>>id;
        count++;
    }

    void getId(){
        cout<<"the id of Employee is "<<id<<" and the Employee number is "<<count<<endl;


    }
    static void getCount(){
        cout<<"The value of count is "<<count<<endl;
    }

};

int Employee :: count; // default value of count is zero

int main(void){
    Employee sonu, kali;
    sonu.setId();
    sonu.getId();
    Employee :: getCount();

    kali.setId();
    kali.getId();
    Employee :: getCount();


}