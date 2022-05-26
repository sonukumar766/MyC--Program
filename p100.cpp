// c++ program to printing the number of occurence of the consecutive numbers
#include <iostream>
using namespace std;

int main()
{
    int currVar = 0, var = 0;
    cout << "enter the numbers: " << endl;
    if (cin >> currVar)
    {
        int cnt = 1;
        while (cin >> var)
        {
            if (currVar == var)
            {
                cnt++;
            }
            else
            {
                cout << currVar << " occurs " << cnt << " times " << endl;
                currVar = var;
                cnt = 1;
            }
        }
        cout << currVar << " occurs " << cnt << " times " << endl;
    }

    return 0;
}