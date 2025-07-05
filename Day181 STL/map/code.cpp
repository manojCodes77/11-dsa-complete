// here we are going to implement the map in c++ STL
#include <bits/stdc++.h>
using namespace std;

// it is used to store the data in key value pair
// it is implemented using self balancing BST or AVL tree
// it stores the unique keys
// it stores the keys in sorted order

int main(){
    map<int,int>m;
    m.insert({1,10});
    m.insert(make_pair(2,20));
    m[3]=30;
    m[4]=40;
    m[5]=50;

    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}