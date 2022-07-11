// STL (standard template library)
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printVector(vector<int> &v){
    for(int i=0;i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}



int main(){

    vector<int>v1;

    int element;

    for(int i=0;i<7;i++){

        cout<<"Enter the element:";
        cin>>element;

        v1.push_back(element);

    }

    printf("The sorted array is: ");
    sort(v1.begin(), v1.end());

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

    
    return 0;
}