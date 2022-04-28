// creating the templates with multiple arguments
#include<iostream>
using namespace std;

template<class T1, class T2>
class Girl{
    public:
     T1 name;
     T2 height;

     void setName(T1 newName){
         name=newName;
     }
     void setHeight(T2 newHeight){
         height=newHeight;
     }
     void display(){
         cout<<"Name of girl is "<<name<<endl;
         cout<<"Height of girl is "<<height<<endl;
     }

};

// driver code
int main(void){
    Girl<string, float>g1;
    g1.setName("Kali Kumari");
    g1.setHeight(5.1);
    g1.display();
}
