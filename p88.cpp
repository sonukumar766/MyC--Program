// parameterized Constructors
#include<iostream>
using namespace std;

class Point{
    private:
    int x;
    int y;
    public:
    Point(int x1, int y1){
        x=x1;
        y=y1;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
};


// drive code
int main(){

    Point p1(34,89);
    cout<<"x = "<<p1.getX()<<endl<<"Y = "<<p1.getY()<<endl;
   
    
    return 0;
}