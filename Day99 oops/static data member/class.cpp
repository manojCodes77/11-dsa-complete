// There is only one copy of a static data member for the entire class, shared by all instances of the class.
#include <bits/stdc++.h>
using namespace std;

class customer
{
    string name;
    int accout_no;
    int balance;

    // static data member
    static int total_customer;

public:
    customer(string name, int accout_no, int balance)
    {
        this->name = name;
        this->accout_no = accout_no;
        this->balance = balance;
        total_customer++;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account No: " << accout_no << endl;
        cout << "Balance: " << balance << endl;
        cout << "Total Customer: " << total_customer << endl;
    }
    void display_total_customer()
    {
        cout << "Total Customer: " << total_customer << endl;
    }

    // static member function
    static void display_total()
    {
        cout << "Total Customer: " << total_customer << endl;
    }
};
// Definition and initialization of the static data member
int customer::total_customer = 0;

int main()
{
    customer A1("Mamta", 1, 1000);
    A1.display_total_customer();
    customer A2("Anuj", 2, 2000);
    customer A3("ChandraMohan", 2, 2000);

    // Static data members can also be accessed using the class name
    customer::display_total();
    
    // Both a1 and a2 will see staticValue as 5
    A1.display_total();
    A1.display_total();
    return 0;
}
