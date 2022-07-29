// write the program to the find the frequency of the number in the array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findFrequency(vector<int> &v, int x)
{
    int cnt = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            cnt++;
        }
    }
    if (cnt > 0)
    {
        return cnt;
    }
    else
    {
        return 0;
    }
}

int main()
{

    vector<int> v1;
    int n = 0;
    cout << "Enter the size of the array: ";
    cin>>n;
    int x;
    int num;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number to  the vector: ";
        cin >> num;
        v1.push_back(num);
    }
    cout << "Enter the number to be search: ";
    cin >> x;

    int res = findFrequency(v1, x);
    cout << "The frequency of the number in the array is: " << res << endl;
    return 0;
}