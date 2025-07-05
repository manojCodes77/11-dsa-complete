// here we are going to build heap function with most optimised approach
#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;// by default it is max heap

    pq.push(10);
    pq.push(15);
    pq.push(5);
    pq.push(20);
    pq.push(30);
    pq.push(25);
    pq.push(35);

    cout<<"The top element of the heap is: "<<pq.top()<<endl;
    pq.pop();// pop the top element

    cout<<"The top element of the heap is: "<<pq.top()<<endl;

    cout<<"The size of the heap is: "<<pq.size()<<endl;

    cout<<"The heap is empty or not: "<<pq.empty()<<endl;

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    cout<<endl<<endl;
    // implementing min heap
    priority_queue<int,vector<int>,greater<int>> pq1;

    pq1.push(10);
    pq1.push(15);
    pq1.push(5);
    pq1.push(20);
    pq1.push(30);
    pq1.push(25);
    pq1.push(35);

    cout<<"The top element of the heap is: "<<pq1.top()<<endl;
    pq1.pop();// pop the top element

    cout<<"The top element of the heap is: "<<pq1.top()<<endl;

    cout<<"The size of the heap is: "<<pq1.size()<<endl;

    cout<<"The heap is empty or not: "<<pq1.empty()<<endl;

    return 0;
}
