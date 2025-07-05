#include <iostream>
using namespace std;

// creating a class
class customer
{

    // by defult , it places the argument in private block
    string name;
    int account_no, balance;

    // hamare pass ek default constructor already present hota hai , compiler use autometically bana deta hai, agar mein use khud banana chahun toh woh bhi ho sakta hai
public:
    // default constructor
    // automatically call hota hai
    customer()
    {
        cout << "jai uttarakhand\n";
        name = "manoj";
        account_no = 234;
        balance = 1000000;
    }

    // display is a function therefore we have to call it
    void display()
    {
        cout << name << " " << account_no << " " << balance << '\n';
    }

    // parameterized constructor
    // customer(string n, int a, int b)
    // {
    //     name = n;
    //     account_no = a;
    //     balance = b;
    // }

    // another approach we have
    // customer(string name, int account_no, int balance)
    // {
    //     this->name = name;
    //     this->account_no = account_no;
    //     this->balance = balance;
    // }

    // another approach we have
    // inline constructor
    
    inline customer(string a, int b, int c) : name(a), account_no(b), balance(c)
    {
    }
    // k
};
int main()
{
    customer A1;
    A1.display();

    customer A2("mamta", 2021, 000000);
    A2.display();
    return 0;
}