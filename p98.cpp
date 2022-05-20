// inheritance in class in c++
#include <iostream>
using namespace std;

// base class
class Parent
{
public:
    int x;
};

// sub class inherited from the base class (parent class)
class Child : public Parent
{
public:
    int y;
};

int main()
{
    Child obj1;
    // object of child class has the access of the data member and member function of parent class

    obj1.y = 56;
    obj1.x = 89;
    cout << obj1.y << endl
         << obj1.x << endl;

    return 0;
}