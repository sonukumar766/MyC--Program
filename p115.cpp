// passing the structure members as arguments to the function
#include<iostream>
using namespace std;

struct student{

    char name[50];
    int age;
    int roll_no;
    double marks;

};

void print(char name[], int age, int roll_no, double marks){
    cout<<name<<" "<<age<<" "<<roll_no<<" "<<marks;
}

// driver code

int main(){

    struct student s1 = {"Sonu", 22, 1963, 90.78};

    print(s1.name, s1.age, s1.roll_no, s1.marks);

    
    return 0;
}