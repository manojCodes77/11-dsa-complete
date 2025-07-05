// dynamic memory allocation in object oriented programming
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age, roll_no;
    string grade;
};
int main(){
    student *S=new student;
    (*S).name="manoj";
    (*S).age=18;
    (*S).roll_no=1876;
    (*S).grade="A+";
    cout<<(*S).name<<endl;
    cout<<endl;

    // another method setting the values
    student *S1=new student;
    S1->name="Mamta";
    S1->age=20;
    S1->roll_no=1877;
    S1->grade="C+";
    cout<<S1->name<<endl;

    return 0;
}
