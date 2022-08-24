// c++ program to delete the particular element from the vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;
    int n=0;
    cout<<"Enter the lenghth of the vector: ";
    cin>>n;
    int ele;
    for(int i=0;i<n;i++){
        cout<<"Enter the elemnt to the vector: ";
        cin>>ele;

        v.push_back(ele);
    }
    // printing the original vector
    cout<<"The original vector is: ";
    for(auto &it:v){
        cout<<it<<" ";
    }
    vector<int>::iterator it;
    it=v.begin();
    // deleting the element at indedx 3
    v.erase(it+3);
    // printing the vector after deleting the element
    cout<<endl;
    cout<<"The vector after the deletong the element: ";
    for(auto &it1:v){
        cout<<it1<<" ";
    }
    return 0;
}