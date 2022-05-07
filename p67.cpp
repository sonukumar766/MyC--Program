// sum of two complex number
#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
        cout << endl;
    }

    void sumOfComplex(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout<<endl;
    }

    void printNumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

// driver code
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    cout << "the complex number is ";
    c1.printNumber();

    c2.setData(3, 4);
    cout << "the complex number c2 is ";
    c2.printNumber();

    c3.sumOfComplex(c1, c2);
    cout << "the sum of c1 and c2 is ";
    c3.printNumber();

    return 0;
}