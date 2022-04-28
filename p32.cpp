// read the string and split it into the string
#include<iostream>
#include<string>
using namespace std;
class str{
    string s;
    public:
     void Read();
     void split_string();
    void display();


};

void str :: Read(){
    cout<<"Enter the String"<<endl;
    cin>>s;


}
void str:: split_string(){
    for(int i=0;i<s.length();i++){
        cout<<s.at(i) <<endl;
    }
}

// driver code;
int main(void){
    str s1;
    s1.Read();
    s1.split_string();
}