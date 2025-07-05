// here we are going to use class with set
#include <bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name, int age)
    {
        this->name=name;
        this->age=age;
    }

    // here we want to sort the set according to age
    bool operator < (const person &other) const
    {
        return age<other.age;
    }
};
int main(){
    set<person>s;
    s.insert(person("manoj",18));
    s.insert(person("kamla",21));
    s.insert(person("rajni",17));

    // iterate
    for(person x:s)
    {
        cout<<x.name<<" "<<x.age<<endl;
    }
    return 0;
}
