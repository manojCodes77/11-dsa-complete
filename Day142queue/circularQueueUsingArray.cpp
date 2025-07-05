// implementing circular queue using array
#include<iostream>
using namespace std;

class queue{
    int *arr;
    int front, rear, size;

    public:
    queue(int s){
        arr = new int[s];
        size = s;
        front = -1;
        rear = -1;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        return (rear+1)%size == front;
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
            rear = (rear+1)%size;
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
                front = (front+1)%size;
            }
        }
        return;
    }

    // peek function
    int peek(){
        if(isEmpty()){
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }
};


int main(){
    queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    q.pop();
    q.pop();

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    return 0;
}