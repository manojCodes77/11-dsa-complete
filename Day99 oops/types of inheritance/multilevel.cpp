#include <bits/stdc++.h>
using namespace std;
class person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "my name is " << name << endl;
    }
};

class employee : public person
{
protected:
    string salary;

public:
    void monthly_salary()
    {
        cout << "my monthly salary is : " << salary << endl;
    }
};

class programmer : public employee
{
public:
    string department;

    programmer(string name, string salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    };

    void work()
    {
        cout << "I am a programmer and I am working in " << department << " department" << endl;}
};
int main()
{
    programmer p1("manoj", "500000", "IT");
   
    p1.introduce();
    p1.monthly_salary();
    p1.work();
    return 0;
}
