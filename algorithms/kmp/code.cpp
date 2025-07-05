// here we are going to solve the problem of longest prefix suffix
#include <bits/stdc++.h>
using namespace std;
int f(string &s){
    int n=s.size();
    int ans=0;
    int start=0;
    int end=n-1;
    while(end>0){
        if(s.substr(0,start+1)==s.substr(end,n)){
            ans=max(ans,start+1);
        }
        end--;
        start++;
    }
    return ans;
}

int main(){
    string s;
    cout<<"enter the string :"<<endl;
    cin>>s;
    cout<<f(s)<<endl;
    return 0;
}