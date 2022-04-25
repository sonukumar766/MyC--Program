#include<iostream>
using namespace std;

class Rectangle{
    public:
     int length;
     int breadth;

     void setLength(int newLength){
         length=newLength;
     }
     void setBreadth(int newBreadth){
         breadth=newBreadth;
     }

     int getPerimeter(){
         return 2*(length+breadth);
     }
     int getArea(){
         return (length*breadth);
     }

};

int main(void){
    Rectangle r1;
    r1.setLength(20);
    r1.setBreadth(10);
    cout<<"perimeter is "<<r1.getPerimeter()<<endl;
    cout<<"Area is "<<r1.getArea();
}