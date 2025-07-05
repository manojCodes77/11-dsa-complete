// definition outside of class is also known as separation of declaration and implementation

// let we take the example of banking sysytem
#include <bits/stdc++.h>
using namespace std;

class customer
{
private:
    int balance;
    string name;
    int age;
    int account_no;

public:
    customer(string name, int age, int account_no, int balance)
    {
        this->name = name;
        this->age = age;
        this->balance = balance;
        this->account_no = account_no;
    }
    void details();
    void deposit(int x);
    void withdrawal(int x, int pin);
};

// printing the details of the customer outside of the function
void customer::details()
{
    cout << "name of customer is : " << name << endl;
    cout << "age of customer is : " << age << endl;
    cout << "account_no of customer is : " << account_no << endl;
    cout << "balance of customer is : " << balance << endl;

    return;
}

// depositing the amount x outside of the function
void customer::deposit(int x)
{
    balance += x;
    cout << "amount deposited succesfully " << endl;
    cout<<"balance : "<<balance<<endl;
    return;
}

// withdrawing the amount x outside of the function
void customer::withdrawal(int x, int pin)
{
    if (pin != 9899)
    {

        cout << "invalid pin !" << endl;
        return;
    }
    if (balance < x)
    {
        cout << "desired amount is not present ! " << endl;
        return;
    }

    balance -= x;
    cout << "amount withdrawal succesfully " << endl;
    cout<<"balance : "<<balance<<endl;
    return;
}

int main()
{

    customer c("manoj", 19, 1234, 10000);

    cout << "details of your account are as follows :" << endl;
    c.details();
    cout << endl;

    c.deposit(100000);
    cout << endl;

    c.withdrawal(10000, 9899);
    return 0;
}
