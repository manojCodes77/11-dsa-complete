#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;

    // insertion
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    // iterate
    for(int x:s)
    {
        cout<<x<<" ";
    }
    
    // find
    cout<<endl;
    unordered_set<int>::iterator it=s.find(3);
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