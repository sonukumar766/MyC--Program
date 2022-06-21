// c++ prpogram to check wether number is prime or composite
#include <iostream>
using namespace std;

int main()
{

    int f = 0;
    int n;
    cout << "Enter your number: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            cout << n << " is composite number" << endl;
            break;
        }
    }
    if (f == 0)
    {
        cout << n << " is prime number" << endl;
    }

    return 0;
}