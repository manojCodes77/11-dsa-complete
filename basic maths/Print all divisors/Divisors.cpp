// Given an integer ‘N’, your task is to write a program that returns all the divisors of ‘N’ in ascending order.
#include <iostream>
using namespace std;
void printDivisors(int n){
    for (int i = 1; i <=    n; i++)
    {
        if (n%i==0){
            cout<<i<<" ";
        }
        
    }
    
}
int main(){
    int a=10;
    printDivisors(a);
    
    return 0;
}