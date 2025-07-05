// we are going to discuss multipath inheritance
// multipath inheritance is a type of inheritance in which a class is derived from two classes and these two classes are derived from a single class
// we cannot use private members of the base class in the derived class

#include <bits/stdc++.h>
using namespace std;

class human
{
protected:
    string name;
    int age;

public:
    // use inline constructor
    human(string name, int age) : name(name), age(age) {}
};

// virtual keyword is used to avoid ambiguity
class student : virtual public human
{
protected:
    int sitting_capacity;
    string fav_subject;

public:
    student(string name, int age, int sitting_capacity, string fav_subject) : human(name, age), sitting_capacity(sitting_capacity), fav_subject(fav_subject) {}
};

class programmer : virtual public human
{
protected:
    string fav_language;
    string fav_os;

public:
    programmer(string name, int age, string fav_language, string fav_os) : human(name, age), fav_language(fav_language), fav_os(fav_os) {}
};

class NSUT_student : public student, public programmer
{

private:
    int roll_no;
    string branch;
    int semester;

public:
    NSUT_student(string name, int age, int sitting_capacity, string fav_subject, string fav_language, string fav_os, int roll_no, string branch, int semester)
        : student(name, age, sitting_capacity, fav_subject), programmer(name, age, fav_language, fav_os), human(name, age), roll_no(roll_no), branch(branch), semester(semester) {}

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Sitting Capacity : " << sitting_capacity << endl;
        cout << "Favourite Subject : " << fav_subject << endl;
        cout << "Favourite Language : " << fav_language << endl;
        cout << "Favourite OS : " << fav_os << endl;
        cout << "Roll No : " << roll_no << endl;
        cout << "Branch : " << branch << endl;
        cout << "Semester : " << semester << endl;
    }
};

int main()
{
    NSUT_student s("Kamla", 20, 100, "Maths", "C++", "Windows", 101, "CSE", 3);

    s.display();
    return 0;
}
