#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "enter any value ";
    cin >> a;
    if (a > 0)
    {
        cout << "the number is positive";
    }
    else if (a == 0)
    {
        cout << "a is nil";
    }
    else
    {
        cout << "a is negative";
    }
}