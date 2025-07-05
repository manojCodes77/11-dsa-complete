#include <bits/stdc++.h>
using namespace std;

double f1(double a,double n) {
    return (a*a*(pow(a,n)-1)/(a-1));
}
double f2(double a,double n){
    return (a*(pow(a,n)-1)/(a-1));
}
double derivative(double (*func)(double,double), double a,double n, double h = 1e-6) {
    return (func(a + h,n) - func(a - h,n)) / (2 * h);
}

double f(double a,double n){
    return derivative(f1,a,n,1e-6)-f2(a,n);
}
int main(){
    double a,n;
    cin>>a>>n;
    cout<<floor(f(a,n)) <<endl;
    return 0;
}