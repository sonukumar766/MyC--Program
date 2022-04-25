// creating the man class to
#include<iostream>
using namespace std;
class Man{
    public:
      string name;
      int age;

      void setName(string newName){
          name=newName;

      }

      void setAge(int newAge){
          age=newAge;
      }

      string getName(){
          return name;
      }
      int getAge(){
          return age;
      }
};
//
int main(void){
    Man m1;
    m1.setName("Sonu Kumar");
    m1.setAge(22);
    cout<<"The name of m1 object is "<<m1.getName()<<endl;
    cout<<"THe age of the object is "<<m1.getAge()<<endl;
}