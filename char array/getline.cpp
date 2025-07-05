// we can input the string having spaces between them with the help of getline() function
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // string bio;

    // cout << "Tell us about yourself: ";

    // getline(cin, bio);

    // cout << "Your bio says: " << bio;

    string name;
    cout << "enter the name : " << endl;

    getline(cin, name);
    cout << name<<endl;

    string line;

    cout << "enter the line : " << endl;
    getline(cin, line); // by default newline character is '\n'
    cout << "enter the line : " << endl;
    cout << "you entered :  " << line << endl;

    return 0;
}