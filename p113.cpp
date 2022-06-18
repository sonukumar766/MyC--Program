// c++ program to find the maximum number in four numbers
#include <iostream>
using namespace std;

template <typename T>
T max(T &x, T &y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

// driver code

int main()
{

    int  n1, n2, n3, n4;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;
    cout << "Enter the fourth number: ";
    cin >> n4;

    int left_max = max(n1, n2);
    int right_max = max(n3, n4);

    int final_max = max(left_max, right_max);

    cout << "Maximum number is " << final_max << endl;

    return 0;
}