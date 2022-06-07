// vector in c++ || STL(standard template library)
#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> vec1;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cout << "add the elements to the vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    displayVector(vec1);

    return 0;
}