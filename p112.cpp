// c++ program to find the largest number among the three numbers
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter the value of n1: ";
    cin >> n1;
    cout << "Enter the value of n2: ";
    cin >> n2;
    cout << "Enter the value of n3: ";
    cin >> n3;
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            cout << n1 << " is largest." << endl;
        }
        else
        { // n3 >>n1
            cout << n3 << " is largest" << endl;
        }
    }
    else
    {
        if (n2 >> n3)
        {
            cout << n2 << " is largest." << endl;
        }
        else
        {
            cout << n3 << " is the largest" << endl;
        }
    }

    return 0;
}