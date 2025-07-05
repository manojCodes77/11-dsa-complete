// here we are going to discuss that what is dhoka behind the size of class;

// note:- size of an empty class is 1 byte
#include <bits/stdc++.h>
using namespace std;
class a{
    // thisis called as non-greeding alignment
    char d;
    int b;
    char c;

    // this is called as greeding alignment
    int e;
    char f;
    char g;
};
int main(){
    a obj;
    cout<<sizeof(obj);
    return 0;
}

