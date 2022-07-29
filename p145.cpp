//find the frequency of the alphabet in the string
#include<iostream>
#include<string>
using namespace std;

int findFrequency(string s, char c){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            cnt++;
        }
    }
    if(cnt>0){
        return cnt;
    }
    else{
        return 0;
    }
}

int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;
    char x;
    cout<<"Enter the alphabet to be search: ";
    cin>>x;

    int res=findFrequency(str,x);
    cout<<"The frequency of the alphabet in the string is: "<<res<<endl;
    return 0;

}