// list are nothing but doubly linked list
#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int>l1;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    for(auto x:l1)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // push front
    l1.push_front(0);
    for(auto x:l1)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    // front
    cout<<l1.front()<<endl;
    // back
    cout<<l1.back()<<endl;

    // pop front
    l1.pop_front();
    for(auto x:l1)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // pop back
    l1.pop_back();
    for(auto x:l1)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    // insert
    list<int>::iterator it=l1.begin();
    it++;
    l1.insert(it,100);
    for(auto x:l1)
    {
        cout<<x<<" ";
    }

    list<int>l2={1,2,3,4,5};
    cout<<endl;
    for(auto x:l2)
    {
        cout<<x<<" ";
    }

    cout<<endl;
    list<int>::iterator itr=l2.begin();
    l2.insert(itr,100);
    for(int x:l2)
    {
        cout<<x<<" ";
    }

    // another method of iteration
    cout<<endl;
    for(list<int>::iterator it=l2.begin();it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;
    

    return 0;
}

