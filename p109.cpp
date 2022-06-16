// sorting the vector in c++
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int>v;
    int n;
    cout<<"Enter the size of the vector: "<<endl;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cout<<"Enter the element to vector: ";
        cin>>element;
        v.push_back(element);
    }
    cout<<"Original vector: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted vector: ";
    sort(v.begin(), v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    
    return 0;
}