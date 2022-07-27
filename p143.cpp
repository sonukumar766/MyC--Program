// c++ program to finds the medin of the array of integer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    int n = 0;
    cout << "Enter the value of n: ";
    cin >> n;

    int element = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data to the vector: ";
        cin >> element;
        v1.push_back(element);
    }

    sort(v1.begin(), v1.end());
    cout<<"THe sorted array is ";
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;

    if (n % 2 == 1)
    {
        cout << "The median = " << v1[(n + 1) / 2 - 1] << endl;
    }
    else
    {
        cout << "The median = " << (v1[n / 2] + v1[n / 2 - 1]) / 2 << endl;
    }
    return 0;
}