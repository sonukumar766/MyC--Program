// c++ programm to find the maximum of four numbers
#include<iostream>
using namespace std;
int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }

}

int main(){
    int a,b,c,d;
    cout<<"Enter the vale of a:"<<endl;
    cin>>a;
    cout<<"Enter the vale of a:"<<endl;
    cin>>b;
    cout<<"Enter the vale of a:"<<endl;
    cin>>c;
    cout<<"Enter the vale of a:"<<endl;
    cin>>d;
    int left_max=max(a,b);
    int right_max=max(c,d);
    int final_max=max(left_max, right_max);
    cout<<final_max;
}


