// string stream in c++
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str;
    cin>>str;
    vector<string>v;
    stringstream ss(str);

    while(ss.good()){
        string substr;
        getline(ss, substr, ',');
        v.push_back(substr);
    }
    for(int i = 0;i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}