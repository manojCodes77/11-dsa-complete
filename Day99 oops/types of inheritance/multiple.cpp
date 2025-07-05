// isme single child hota hai aur multiple parents hote hain
#include <bits/stdc++.h>
using namespace std;
class engineer{
    public:
    string specialisation;
    void work(){
        cout<<"I have to work in my specialisation  "<<specialisation<<endl;

    }
};

class youtuber{
    public :
    int subscribers;

    void content_creator(){
        cout<<"I have to create content for my  "<<subscribers<<" subscribers"<<endl;
    }
};

// now we have to inherit both the classes in a single class
class codeTeacher : public engineer, public youtuber{
    public:
    string name;

    codeTeacher(string name, string specialisation, int subscribers){
        this->name=name;
        this->specialisation=specialisation;
        this->subscribers=subscribers;
    }
    void code(){
        cout<<"I am a coding teacher and I have to teach coding"<<endl;
    }
    void display(){
        cout<<"My name is : "<<name<<endl;
        work();
        content_creator();
    }
};

int main(){
    codeTeacher c1("manoj","web development",49000);
    c1.display();

    return 0;
}
