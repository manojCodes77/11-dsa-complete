// iske andar single parents hote hain,aur multiple children hote hain
#include <bits/stdc++.h>
using namespace std;
class human{
    protected:
    string name;
    int age;

    public :

    human(string name, int age){
        this->name=name;
        this->age=age;
    }
};
class student : public human{
    private:
    int roll_number,fees;

    public:
    student(string name,int age, int roll_number,int fees) : human(name,age)  {
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"roll number : "<<roll_number<<endl;
        cout<<"fees : "<<fees<<endl;
    }
};

class teacher : public human{
    private:
    int salary;
    string subject;

    public:
    teacher(string name,int age, int salary,string subject) : human(name,age)  {
        this->salary=salary;
        this->subject=subject;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"salary : "<<salary<<endl;
        cout<<"subject : "<<subject<<endl;
    }
};
int main(){
    student m1("manoj",18,1876,250);
    m1.display();
    cout<<endl;

    teacher t1("Rohit Negi",26,50000,"Data Structure");
    t1.display();
    return 0;
}
