#include <iostream>
#include<vector>
using namespace std;
bool isprime(int n){
    vector <int>v;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0){
            v.push_back(i);
        }
    }

    if(v.empty()){
        return true;
    }else{
        return false;
    }
}
int main(){
    int a=2;
    bool prime;
    prime=isprime(a);
    cout<<a<<" is a prime number , this statement is : "<<prime<<endl;

    return 0;
}