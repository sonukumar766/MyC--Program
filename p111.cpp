// c++ program to finding the greatest number among the three
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "The first number is :";
    cin >> n1;
    cout << "The second number is: ";
    cin >> n2;
    cout << "THe third number is: ";
    cin >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << "n1 is greatest." << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "n2 is greatest." << endl;
    }
    else
    {
        cout << "n3 is greatest." << endl;
    }

    return 0;
}