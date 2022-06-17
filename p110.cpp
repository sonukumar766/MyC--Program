// c++ program to check wether the year is leap or not
#include <iostream>
using namespace std;

int main()
{

    int chk_year;
    cout << "Input the year: ";
    cin >> chk_year;
    if ((chk_year % 400 == 0))
    {
        cout << chk_year << " is a leap year" << endl;
    }
    else if ((chk_year % 100==0))
    {
        cout << chk_year << " is not a leap year" << endl;
    }
    else if ((chk_year % 4 == 0))
    {
        cout << chk_year << " is a leap year" << endl;
    }
    else
    {
        cout << chk_year << " is not a leap year" << endl;
    }

    return 0;
}