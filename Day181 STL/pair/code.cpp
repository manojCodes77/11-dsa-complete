#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<string,int>p;

    // two methods
    p=make_pair("manoj ",100);

    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<endl;

    // second method
    p.first="kamla ";
    p.second=00;

    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<endl;

    // third method
    pair<string,int>p1("rajni ",10);
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    // name age weight
    pair<string,pair<int,int>>p2;
    p2=make_pair("manoj",make_pair(100,50));
    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;


    return 0;
}
