// Implementing the left rotation in the vector.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n=0;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    int k=0;
    cout<<"Enter the number of left rotation: ";
    cin>>k;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the element to the vector: ";
        cin>>ele;
        v.push_back(ele);

    }
    cout<<"The original vector is: ";
    for(auto &x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    rotate(v.begin(), v.begin()+k, v.end());
    cout<<"the vector after rotation is: ";
    for(auto &y:v){
        cout<<y<<" ";
    }
    return 0;

}