// if the content access is private, then we can form functions
// it is also used to handle exceptional handling
#include <iostream>
using namespace std;
class student
{
    // now they are private by default
    string name;
    int age, roll_no;
    string grade;

public:
    // setter functions
    void setname(string s)
    {
        if (s.size() == 0)
        {
            cout << "Invalid name! \n";
            return;
        }
        name = s;
    }
    void setage(int a)
    {
        if (a < 0 || a > 150)
        {
            cout << "invalid age !";
            return;
        }

        age = a;
    }
    void setrollno(int s)
    {
        roll_no = s;
    }
    void setgrade(string a)
    {
        grade = a;
    }

    // getter function , we can also form multiple functions
    // void get(){
    //     cout<<name<<endl;
    //     cout<<age<<endl;
    //     cout<<roll_no<<endl;
    //     cout<<grade<<endl;
    // }
    void getname()
    {
        cout << name << endl;
    }
    void getage()
    {
        cout << age << endl;
    }
    void getrollno()
    {
        cout << roll_no << endl;
    }
    void getgrade(string password)
    {
        // if anybody wants to access the grade, then he should enter the password
        if (password != "1234")
        {
            cout << "Invalid password" << endl;
            return;
        }

        cout << grade << endl;
    }
};

int main()
{
    student s1;
    s1.setname("Rajni");
    s1.setage(18);
    s1.setgrade("A+");
    s1.setrollno(1876);
    s1.getname();
    s1.getage();
    s1.getrollno();
    s1.getgrade("1234");
    // s1.get();
    cout << endl
         << endl;

    student s2;
    s2.setname("");
    s2.setage(160);
    s2.setgrade("C+");
    s2.setrollno(2);
    // s2.get();
    s2.getname();
    s2.getage();
    s2.getgrade("1234");
    s2.getrollno();
    


    return 0;
}