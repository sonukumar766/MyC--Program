// switch case statement in c++
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;

    switch(age){
        case 18:
        cout<<"You are 18"<<endl;
        break;

        case 20:
        cout<<"You are 20"<<endl;
        break;

        case 21:
        cout<<"You atre 21"<<endl;
        break;

        default:
        cout<<"No such a special case"<<endl;
        break;
    }
    return 0;

}