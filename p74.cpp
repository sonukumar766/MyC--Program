// more c++ friend function
#include <iostream>
using namespace std;
// forward declaration
class Y;
class X
{

    int num1;

public:
    void setValue(int value)
    {
        num1 = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num2;

public:
    void setValue(int value1)
    {
        num2 = value1;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout<<"the addition of data of class X and class Y is "<<o1.num1 + o2.num2<<endl;
}

int main()
{
    X n1;
    n1.setValue(23);

    Y n2;
    n2.setValue(67);

    add(n1, n2);


    return 0;
}