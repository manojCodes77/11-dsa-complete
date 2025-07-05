#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "lowercase" << endl;
    }
    else if (a >= 'A' && a <= 'Z')
    {
        cout << "uppercase" << endl;
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "number" << endl;
    }
    else
    {
        cout << "special character" << endl;
    }
}