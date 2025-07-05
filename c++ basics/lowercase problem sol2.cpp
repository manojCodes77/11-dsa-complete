#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character:\n ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "the character is lowercase\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "the character is in uppercase\n";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "the char is a digit\n";
    }
    else
    {
        cout << "the char is a special character\n";
    }
}