// array of structure in c++
#include <iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point arr[5]; // it contains five points in array

    // accessing the array member
    arr[0].x = 90;
    arr[0].y = 88;
    cout << arr[0].x << " " << arr[0].y << endl;

    return 0;
}