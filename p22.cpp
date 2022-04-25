#include<iostream>
using namespace std;

template< class T1,class T2,class T3>
class Man{
    public:
     T1 name;
     T2 age;
     T3 height;

     void setName(T1 newName){
         name=newName;

     }
     void setAge(T2 newAge){
         age=newAge;
     }
     void setHeight(T3 newHeight){
         height=newHeight;
     }
     T1 getName(){
         return name;
     }
     T2 getAge(){
         return age;
     }
     T3 getHeight(){
         return height;
     }
};

int main(void){
    Man<string, int, float>m1;
    m1.setName("Sonu Kumar");
    m1.setAge(22);
    m1.setHeight(5.6);
    cout<<"Name of the man m1 is "<<m1.getName()<<endl;
    cout<<"Age of the person is "<<m1.getAge()<<endl;
    cout<<"Height of the person is "<<m1.getHeight()<<endl;

}