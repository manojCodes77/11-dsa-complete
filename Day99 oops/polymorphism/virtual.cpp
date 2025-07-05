#include <bits/stdc++.h>
using namespace std;
class animal{
    public:
    virtual void speak(){
        cout<<"Grrr"<<endl;
    }

};

class dog: public animal{
    public:
    void speak(){
        cout<<"Woof! Woof!"<<endl;
    }
};


int main(){
    animal *p;
    p=new dog();
    p->speak();
    return 0;
}
