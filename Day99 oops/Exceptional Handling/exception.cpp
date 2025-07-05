// here we are using bank customer example to understand the concept of exceptional handling

#include <iostream>
#include <stdexcept>
using namespace std;

class Customer{
    string name;
    int balance;
    int account_number;

public:
    // constructor
    Customer(string n, int b, int a){
        name = n;
        balance = b;
        account_number = a;
    }

    // deposit
    void deposit(int amount){
        if(amount < 0){
            throw invalid_argument("Invalid amount");
        }
        balance += amount;
        cout<<"Amount deposited successfully"<<endl;
    }

    // withdraw
    void withdraw(int amount){
        if(amount < 0){
            throw invalid_argument("Invalid amount");
        }
        if(amount > balance){
            throw runtime_error("Insufficient balance");
        }
        balance -= amount;
        cout<<"Amount withdrawn successfully"<<endl;
    }

};

int main(){
    try {
        Customer c("Rahul", 1000, 12345);

        c.deposit(100);
        c.withdraw(2000);
    }
    catch(const invalid_argument& e){
        cout << "Error: " << e.what() << endl;
    }
    catch(const runtime_error& e){
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
