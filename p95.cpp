// copy constructor in c++
#include <iostream>
using namespace std;

class Point
{
    int x;
    int y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    // copy constructor in c++
    Point(const Point &p1)
    {
        x = p1.x;
        y = p1.y;
    }
    void displayPoint()
    {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main()
{
    Point p1(12, 34); // Normal constructor called here
    Point p2 = p1;    // Copy constructor called here

    cout << "the point p1 is " << endl;
    p1.displayPoint();

    cout << "the copy point p2 is " << endl;
    p2.displayPoint();

    return 0;
}