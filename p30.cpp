// nesting of member functions
#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;
    public:
     void Read(void);
     void check_bin(void);

};
void binary :: Read(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;

}

void binary:: check_bin(void){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Enter binary is incorrect format"<<endl;
            exit(0);
        }
        
    }cout<<"This string is correct binary number"<<endl;
    
}

// driver code
int main(void){
    binary b;
    b.Read();
    b.check_bin();

}