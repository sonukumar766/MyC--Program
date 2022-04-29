//nesting members in c++ 
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

// creating biinary class
class binary{
    string s;                /* private member is only accessed iside the functions of the class*/
    private:
     void check_binary(void);
    public:
     void read(void);
     
     void ones_complement(void);
     void display(void);

};

void binary :: read(){
    cout<<"Enter the binary number "<<endl;

    cin>>s;
}

void binary :: check_binary(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(){
    check_binary();
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
        else{
            s.at(i)='1';
        }
    }
}
void binary :: display(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;

}
// driver code
int main(){
    binary b1;
    b1.read();
    //displaying the binary original binary number
    cout<<"Original Bimary Number:"<<endl;
    b1.display();
    b1.ones_complement();
    cout<<"ones complement of binary number:"<<endl;
    b1.display();
    

}