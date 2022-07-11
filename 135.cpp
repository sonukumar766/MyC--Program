// implementing the friend function
#include <iostream>
using namespace std;

class complex
{

    int a;
    int b;

public:
    void setNumber(int a1, int b1)
    {
        a = a1;
        b = b1;

        cout << endl;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
    friend int sumOfReal(complex, complex);
};

int sumOfReal(complex o1, complex o2)
{
    int c = (o1.a + o2.a);
    return c;
}

// driver code

int main()
{

    complex o1, o2;

    o1.setNumber(12, 34);
    cout << "The first complex number is: ";
    o1.printNumber();
    o2.setNumber(34, 56);
    cout << "The second complex number is: ";
    o2.printNumber();
    cout<<endl;

    int res = sumOfReal(o1, o2);
    cout << "Sum of real part is: " << res << endl;

    return 0;
}