// static member and method
#include<iostream>
using namespace std;

class Employee{
    public:
     int id;
     static int count;
     void setData(void){
         cout<<"Enter id of Employee"<<endl;
         cin>>id;
         count++;
     }
     
     void getData(void){
         cout<<"the id of employee is "<<id<<" and employee number is "<<count<<endl;
     }

};

int Employee :: count; // default value is zero;

int main(void){
    Employee sonu,vikash;

    sonu.setData();
    sonu.getData();

    sonu.setData();
    sonu.getData();
}