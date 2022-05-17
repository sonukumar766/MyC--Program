// static data member in c++
#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setId(int a){
        id=a;
        count++;
        cout<<endl;
    }
    void getId(){
        cout<<"The id of the Employee no "<<count<<" is " <<id<<endl;
    }

};
int Employee :: count; // default value of count is zero;

int main(){

    Employee e1, e2;
    e1.setId(12);
    e1.getId();

    e2.setId(13);
    e2.getId();

    
    return 0;
}