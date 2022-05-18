//constructor overloadding
#include<iostream>
using namespace std;

class Rectangle{
    int l;
    int w;
    int area;
    public:
    Rectangle(){
        area=0;
    }
    Rectangle(int l1, int w1){
        l=l1;
        w=w1;
        area=l*w;
    }

    void display(){
        cout<<"area of the rectangle is "<<area<<endl;
    }
    

};

int main(){
    Rectangle r1;
    r1.display();

    Rectangle r2(12,34);
    r2.display();
    
    return 0;
}