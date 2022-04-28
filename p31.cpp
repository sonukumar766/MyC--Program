// find the one's complete of the binary number
#include<iostream>
#include<string>
using namespace std;
class binary{
    string s;
    public:
     void Read(void);
     void check_binary(void);
     void ones_complement(void);
     void display(void); // for desplaying the ones complement of the given binary string


};
// driver code
void binary:: Read(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;

}
void binary:: check_binary(void){
    for(int i=0;i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary format"<<endl;
           
        }
    }
}

void binary:: ones_complement(void){
    for(int i=0;i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
}

void binary:: display(void){
    cout<<"display binary number"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
}

// driver code
int main(void){
    binary b;
    b.Read();
    b.check_binary();
    b.display();
    b.ones_complement();
    b.display();
}