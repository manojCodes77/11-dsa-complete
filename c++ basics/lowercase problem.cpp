/*input a char and return that char case
whether it is uppercase , lowercase
or numeric*/
#include <iostream>
#include <cctype>
using namespace std;
int main()

{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch))
    {
        cout << "The character is uppercase";
    }
    else if (islower(ch))
    {
        cout << "The character is lowercase";
    }
    else if (isdigit(ch))
    {
        cout << "The character is numeric";
    }
    else
    {
        cout << "The character is not alphanumeric";
    }
}