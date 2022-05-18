// structure in c++
#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;

    void setValue(int x1, int y1){
        x=x1;
        y=y1;
    }

    void printPoint(){
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }

};

int main(){

    struct Point p1;

    p1.setValue(23,45);
    p1.printPoint();
    
    return 0;
}