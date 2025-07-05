// here we are going to use linked list to implement stack
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

// stack class
class mystack
{
public:
    Node *head;
    int sz; // actual size of stack

    // constructor
    mystack()
    {
        head = NULL;
        sz = 0;
    }

    // push function
    void push(int data)
    {
        Node *temp = new Node(data);
        // heap memory is full
        if (temp == NULL)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        temp->next = head;
        head = temp;
        sz++;
        cout << data << " pushed to stack" << endl;
        return;
    }

    // pop function
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        Node *temp = head;
        cout << head->data << " popped from stack" << endl;
        head = head->next;
        delete temp;

        sz--;
    }

    // peek function
    int peek()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->data;
    }

    // size function
    int size()
    {
        return sz;
    }

    // empty function
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{

    mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is " << s.peek() << endl;
    s.pop();
    cout << s.size()<<endl;
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
