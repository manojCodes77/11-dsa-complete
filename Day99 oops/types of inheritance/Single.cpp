// #include <bits/stdc++.h>
// using namespace std;
// class human{
//     protected:
//     string name;
//     int age;

//     public :
//     void work(){
//         cout<<"jai shree ram \n";
//     }

//     human(){
//         cout<<"jai shree krishna\n";
//     }
// };

// class student : public human{
//     private:
//     int roll_number,fees;

//     public:
//     student(string name,int age, int roll_number,int fees)  {
//         this->name=name;
//         this->age=age;
//         this->roll_number=roll_number;
//         this->fees=fees;
//     }

//     student(){
//         cout<<"jai shree ram\n";
//     }
// };
// int main(){
//     // student m1("manoj",18,1876,250);
//     // m1.work();
//     student n1;
//     return 0;
// }


// another method to fill the data is given below
// it is little bit of more advanced
#include <bits/stdc++.h>
using namespace std;
class human{
    protected:
    string name;
    int age;

    public :

    human(string name, int age){
        cout<<"hello humans\n";
        this->name=name;
        this->age=age;
    }
};
class student : public human{
    private:
    int roll_number,fees;

    public:
    student(string name,int age, int roll_number,int fees): human(name,age)  {
        cout<<"hello students \n";
        this->roll_number=roll_number;
        this->fees=fees;
    }
    void display(){
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"roll number is : "<<roll_number<<endl;
        cout<<"fees is : "<<fees<<endl;

    }

    
};
int main(){
        student m1("manoj",18,1876,250);
        cout<<endl;
        m1.display();
    return 0;
}
