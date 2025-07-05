#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter a number\n";
    cin >> a;
    int b;
    cout << "enter second number\n";
    cin >> b;
    // int c = a & b;
    // cout << c;/
    cout << a << "&" << b << "=" << (a & b) << endl;
    return 0;
}