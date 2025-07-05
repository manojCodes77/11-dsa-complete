// now we are using STL in the stack class
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    // Top element is 30
    cout << "Top element is " << s.top() << endl;

    // pop the top element
    s.pop();
    cout << "Top element is " << s.top() << endl;

    // size of the stack
    cout << "Size of the stack is " << s.size() << endl;

    // check if the stack is empty
    cout << "Is the stack empty? " << s.empty() << endl;
    return 0;
}