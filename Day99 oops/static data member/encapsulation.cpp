// encapsulation says that the data should not be directly accessible, it should be accessed through the member functions of the class.
#include <bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int accout_no;
    int balance;
    int age;
    public:
    void set_data(string name,int accout_no,int balance,int age){
        this->name=name;
        this->accout_no=accout_no;
        this->balance=balance;
        if (age>0 && age<100)
        {
           this->age=age;
        }
        else
        {
            cout<<"Invalid Age"<<endl;
            this->age=0;
        }
        
        
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account No: "<<accout_no<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    customer A1;
    A1.set_data("Mamta",1,1000,-2);
    A1.display();
    return 0;
}
