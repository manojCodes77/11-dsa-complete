// here we have basically 5 operations
#include <iostream>
using namespace std;

// implementation of queue using array
class Queue{
    int *arr;
    int front, rear, size;

    public:
    Queue(int s){
        arr = new int[s];
        size = s;
        front = -1;
        rear = -1;
    }

    // empty function
    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    // full function
    bool isFull(){
        if((front == 0 && rear == size-1) || (front == rear+1)){
            return true;
        }
        return false;
    }

    // push function
    void push(int val){
        if(isFull()){
            cout << "Queue Overflow!" << endl;
        }
        else{
            if(front == -1){
                front = 0;
            }
            rear++;
            arr[rear] = val;
            cout << val << " is inserted" << endl;
        }
        return;
    }

    // pop function
    void pop(){
        if(isEmpty()){
            cout << "Queue Underflow!" << endl;
        }
        else{
            cout << arr[front] << " is removed" << endl;
            if(front == rear){
                front = -1;
                rear = -1;
            }
            else{
                front++;
            }
        }
        return;
    }

    // start function
    int start(){
        if(isEmpty()){
            cout << "Queue is empty!" << endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);

    q.pop();


    cout << "Front element is: " << q.start() << endl;

    q.pop();

    q.push(4);

    q.isEmpty() ? cout << "Queue is empty!" << endl : cout << "Queue is not empty!" << endl;

    q.pop();
    q.pop();

    cout<< "Front element is: " << q.start() << endl;

    return 0;
}
