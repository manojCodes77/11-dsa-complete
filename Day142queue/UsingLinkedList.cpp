// implementing queues using linkedlist
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;

public:
    // constructor
    Queue()
    {
        front = NULL;
        rear = NULL;
    }

    // empty function
    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }

    // push function
    void push(int val)
    {

        cout << val << " is inserted" << endl;
        Node *n = new Node(val);
        if (front == NULL)
        {
            front = n;
            rear = front;
        }
        else
        {
            rear->next = n;
            rear = rear->next;
        }
        return;
    }

    // pop function
    void pop()
    {

        if (isEmpty())
        {
            cout << "Queue Underflow!" << endl;
        }
        else
        {

            Node *toDelete = front;
            front = front->next;
            cout << toDelete->data << " is removed" << endl;
            delete toDelete;
        }
        return;
    }

    // peek function
    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return front->data;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();
    q.pop();

    cout << "Front element is: " << q.peek() << endl;
    bool empty = q.isEmpty();
    empty ? cout << "Queue is empty!" << endl : cout << "Queue is not empty!" << endl;

    q.pop();
    return 0;
}
