// implementing the right ratation in the vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n=0;
    cout<<"Enter the size of vector: ";
    cin>>n;
    int k=0;
    cout<<"Enter the number of right rotation: ";
    cin>>k;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter the element to the vector: ";
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"The original vector is : ";
    for(auto &it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    rotate(v.begin(), v.size()+v.begin()-k, v.end());
    cout<<"The vector after the rotation is: ";
    for(auto &it1:v){
        cout<<it1<<" ";
    }
    return 0;

}