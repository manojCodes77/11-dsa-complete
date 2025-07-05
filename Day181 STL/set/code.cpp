#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    
    s.insert(2);
    s.insert(4);
    s.insert(3);
    s.insert(1);
    s.insert(6);

    for(int x:s)
    {
        cout<<x<<" ";
    }

    // alternate
    cout<<endl;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }

    set<int,greater<int>>s1={1,2,3,4,5,6};
    cout<<endl;
    for(int x:s1)
    {
        cout<<x<<" ";
    }

    // find
    cout<<endl;
    set<int>::iterator it=s.find(3);
    if(it==s.end())
    {
        cout<<"element not found"<<endl;
    }
    else
    {
        cout<<"element found"<<endl;
    }

    // delete
    s.erase(3);
    for(int x:s)
    {
        cout<<x<<" ";
    }

    // count
    cout<<endl;
    cout<<s.count(3)<<endl;

    return 0;
}