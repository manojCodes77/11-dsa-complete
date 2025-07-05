// here we are going to create a class
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age, roll_no;
    string grade;
};

int main(){
    student s1;
    s1.name="manoj";
    s1.age=18;
    s1.roll_no=1876;
    s1.grade="A+";

    cout<<s1.name<<endl;

    // second object initialisation
    student s2;
    s2.name="Kamla";
    s2.age=20;
    
    cout<<s2.age<<endl;
    cout<<s2.roll_no<<endl;//it will return a garbage values
    return 0;
}