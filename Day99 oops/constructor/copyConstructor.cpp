// here , we have to use the concept the concept of pointer to create a copy constructor
#include <iostream>
using namespace std;
class customer
{
    string name;
    int account_no, balance;

public:
    // inline constructor
    inline customer(string a, int b, int c) : name(a), account_no(b), balance(c)
    {
    }
    customer()
    {
    }
    void display()
    {
        cout << name << " ," << account_no << " ," << balance << '\n';
    }
    // copy constructor
    customer(customer *c){
        name=c->name;
        account_no=c->account_no;
        balance=c->balance;
    }
};

int main()
{
    customer A1("manoj", 234, 1000000);
    cout<<"A1 is :\n";
    A1.display();
    cout<<endl;



    customer A2(A1);
    cout<<"A2 is: \n";
    A2.display();
    cout<<endl;

    customer A3("kamla", 235, 1000);
    cout<<"A3 is :\n";
    A3.display();
    cout<<endl;

// using assignment operator
    customer A4;
    A4 = A3;
    cout<<"A4 is :\n";
    A4.display();
    cout<<endl;

    return 0;
}