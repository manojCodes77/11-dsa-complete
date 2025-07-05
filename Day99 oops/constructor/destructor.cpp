#include <iostream>
using namespace std;
class customer
{
    string name;
    int *data;
    int i = 1;

public:
    customer(string s)

    {
        data=new int[5];
        // cout<<"enter the numbers :  ";
        for (int i = 0; i < 5; i++)
        {
            data[i] = i;
        }
        
        cout << "constructor called : " << s << endl;
    }
    ~customer()
    {

        cout << "destructor called : "  << endl;
        delete[] data;
    }
    void display()
    {
        
        for (int i = 0; i < 5; i++)
        {
            cout << data[i] << " ";
        }
        cout<<endl;
    }
};
int main()
{
    customer A1("A1");
    // customer A2("A2");
    // customer A3("A3");

    A1.display();
    return 0;
}