#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age, roll;
    string grade;
};

int main(){
    Student s1;
    s1.name="Rohit";
    s1.age=10;
    s1.roll=20;
    s1.grade="A++";


    cout<<s1.age<<endl;
}