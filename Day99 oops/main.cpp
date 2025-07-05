#include <bits/stdc++.h>
using namespace std;

class Student{
    protected:
    float iq;
    public:
    string name;
    int age;
    Student(string name, int age){
        this->name=name;
        this->age=age;
    }
};

class SchoolStudent:public Student{
    public:
    string college;
    float cgpa;
    SchoolStudent(string name,int age,string college,float cgpa, float iq):Student(name,age){
        this->college=college;
        this->cgpa=cgpa;
        this->iq=iq;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    SchoolStudent s=SchoolStudent("Manoj",12,"ABC College",3.5, 120);
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.college<<endl;
    cout<<s.cgpa<<endl;

    return 0;
}