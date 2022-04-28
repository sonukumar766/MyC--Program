// template with multiple arguments;
#include<iostream>
using namespace std;

template<class T1, class T2>
class Women{
    public:
     T1 name;
     T2 height;
     void setName(T1 newName){
         name=newName;
     }
     void setHeight(T2 newHeight){
         height=newHeight;
     }
     string getName(){
         return name;
     }
     int getHeight(){
         return height;
     }
     
};
// driver code
int main(void){
    Women<string,float>w1;
    w1.setName("Kali Kumari");
    w1.setHeight(5.1);
    cout<<"Name of w1 object is "<<w1.getName()<<endl;
    cout<<"Height of "<<w1.getName()<<" is "<<w1.getHeight()<<endl;

}
