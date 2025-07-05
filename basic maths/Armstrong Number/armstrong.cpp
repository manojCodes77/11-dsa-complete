// You are given an integer 'n'.

// Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

#include <iostream>
#include<cmath>
using namespace std;
int countDigit(int n){
    int cd=0;

    while (n!=0)
    {
        cd++;
        n=n/10;
    }
    return cd;
    
}
bool checkArmstrong(int n){
	int lastDigit;
    int originalN=n;
    int num=0;
    int cd=countDigit(n);
    int power;
    while (n>0)
    {
        lastDigit=n%10;
        n=n/10;
        power=pow(lastDigit,cd);
        num=num + power;
    }

    if(num==originalN){
        return true;
    }else{
        return false;
    }
}


int main(){
    int n=371;
    bool check=checkArmstrong(n);
    if (check)
    {
            cout<<n<<" is an armstrong , that statement is true ."<<endl;

    }
    else
    {
        cout<<n<<" is an armstrong , that statement is false ."<<endl;
    }
    
    
    return 0;
}