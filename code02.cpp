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

    Student s2;
    s2.name="Mohit";
    s2.age=11;
    s2.roll=21;
    s2.grade="B++";\


    cout<<s1.age<<endl;
    cout<<s2.grade<<endl;
}