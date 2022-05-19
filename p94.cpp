// structure member can initialized by curly braces ({});
#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;

};

int main(){
    // a valid initialization. member x gets value 0 and y gets 1;
    struct Point p1={0, 1};

    cout<<"x = "<<p1.x<<", y = "<<p1.y<<endl;

    // updating the value of y;
    p1.y=8;
    cout<<" x = "<<p1.x<<", y= "<<p1.y<<endl;
    
    return 0;
}