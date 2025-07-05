// hybrid is a combination of multiple inheritance ,multilevel inheritance and hierarchical inheritance also

#include <bits/stdc++.h>
using namespace std;

// stdent
// boy
// girl
// male
// female

class student
{
public:
    void study()
    {
        cout << "I am a student." << endl;
    }
};
class male
{
public:
    void male_study()
    {
        cout << "I am a male\n";
    }
};
class female
{
public:
    void female_study()
    {
        cout << "I am a female\n";
    }
};

class boy : public student, public male
{
public:
    void boy_study()
    {
        cout << "I am a boy\n";
    }
};

class girl : public student, public female
{
public:
    void girl_study()
    {
        cout << "I am a girl\n";
    }
};

int main()
{
    student s1;
    s1.study();

    girl g1;
    // g1.study();
    // g1.female_study();
    g1.girl_study();
    
    return 0;
}