// sorting the array in descending order
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v1;

    int  element;

    for(int i=0;i<5;i++){

        cout<<"Enter the element to the vector: ";
        cin>>element;
        v1.push_back(element);

    }
    cout<<"Sorted array: ";
    sort(v1.begin(), v1.end(), greater<int>());
    for(auto x : v1){
        cout<<x<<" ";
    }
    return 0;




}