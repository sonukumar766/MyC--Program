// structure pointers in c++
#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;

};

int main(){
    struct Point p1={34, 78};

    // p2 is a pointer to a structure p1
    struct Point* p2=&p1;
    cout<<p2->x<<" "<<p2->y<<endl;
    return 0;
}