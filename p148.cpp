// deleting all the element from the vector
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v;
    int n=0;
    cout<<"Enter the size of the vector: ";
    cin>>n;
    int ele;
    for(int i=0;i<n;i++){
        cout<<"Enter the element to the vector: ";
        cin>>ele;
        v.push_back(ele);
    }
    // printing the original vector
    for(auto &it:v){
        cout<<it<<" ";
    }
    // deleting the element from the vector
    v.clear();
    cout<<endl;
    cout<<"The vector after deleting: ";
    for(auto &x:v){
        cout<<x<<" ";
    }
    return 0;
}