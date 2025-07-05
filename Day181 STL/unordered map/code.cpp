// unordered map
#include <bits/stdc++.h>
using namespace std;

// unique keys must be there, duplicate keys are not allowed
// but order is not maintained
// implemented using hashing
// it is faster than map
// insertion, deletion, search operation takes O(1) time

int main(){
    unordered_map<int,int>m;
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
    for(unordered_map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}