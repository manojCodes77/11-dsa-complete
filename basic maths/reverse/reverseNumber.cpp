// Ninja is feeling very bored and wants to try something new. So, he decides to find the reverse of a given number. But he cannot do it on his own and needs your help.

// Note:

// If a number has trailing zeros, then its reverse will not include them. For e.g., the reverse of 10400 will be 401 instead of 00401.
#include <iostream>
using namespace std;
int reverseNumber(int n){
    int lastDigit;
    int revN=0;
    while (n>0)
    {
        lastDigit=n%10;
        n=n/10;
        revN=(revN*10) + lastDigit;
    }
    return revN;
    
}
int main(){
    int n=10400;
    int rev=reverseNumber( n);
    cout<<rev;
    return 0;
}