// now we are going to study stack operations
#include <bits/stdc++.h>
using namespace std;

class MyStack
{
    int *arr;
    int top;
    int capacity; // Renamed size to capacity

public:
    // flag attribute;
    bool flag;
    // we form this to determine whether our stack is empty or not

    // constructor
    MyStack(int n)
    {
        capacity = n;
        arr = new int[n];
        top = -1;
        flag = 1;//when the stack dont have any element , then we say flag=1
    }

    // push function
    void push(int x)
    {
        if (top == capacity - 1)
        {
            cout << "stack overflow\n " << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << x << " pushed into stack\n";
        // after pushing an element into a stack , it will not empty , therefore , we equate flag =0;
        flag=0;
    }

    // pop function
    void pop()
    {
        if (top == -1)
        {
            cout << "stack underflow\n";
            return;
        }
        top--;
        cout << "popped from stack\n";
        if(top==-1)flag=1;
        
    }

    // peek function
    int peek()
    {
        if (top == -1)
        {
            cout << "stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    // empty function
    bool empty()
    {
        return top == -1;
    }

    // size function
    int size()
    {
        return top + 1;
    }
};

int main()
{
    MyStack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(-1);


    // printing the top element
    // cout << s.peek() << endl;
    // instead of this , we will use 
    int value=s.peek();
    if(s.flag==0)cout<<value<<endl;

    

    return 0;
}
