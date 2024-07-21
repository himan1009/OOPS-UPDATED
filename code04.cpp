#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    double *cgpaPtr;
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    ~Student()
    {
        cout << "Hi, I delete everything" << endl;
        delete cgpaPtr;
    }
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};
int main()
{
    Student s1("rahul kumar", 8.44);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s2.name = "neha";
    s1.getInfo();
    s2.getInfo();
    return 0;
}