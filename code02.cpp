#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int age, roll;
    string grade;

    // getter and setter
public:
    void setName(string s){
        if(s.size()==0){
            cout<<"invalid name"<<endl;
            return;
        }
        name=s;
    }
    void setAge(int a){
        age=a;
    }
    void setRoll(int r){
        roll=r;
    }
    void setGrade(string g){
        grade=g;
    }



    void getName(){
        cout<<name<<endl;
    }
    void getAge(){
        cout<<age<<endl;
    }
};

int main(){
    Student s1;
    s1.setName("Rohit KUmar");
    s1.setAge(10);
    s1.setRoll(30);
    s1.setGrade("B++");

    s1.getName();
    s1.getAge();
}