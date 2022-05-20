// Inheritance in structure, in c++
#include <iostream>
using namespace std;

struct Base
{

    int x;
};
struct Derived : Base
{
    int y;
};

int main()
{

    struct Derived p1;

    // variables of derived structure has all access of the base structure

    p1.x = 45;
    p1.y = 78;
    cout << p1.x << endl
         << p1.y << endl;

    return 0;
}