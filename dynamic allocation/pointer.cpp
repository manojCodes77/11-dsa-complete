#include <iostream>
using namespace std;
int fun(int *a)
{
    *a=(*a) +34;
    return *a;
}
int main()
{
    int a = 5;
    void *b = &a;
    cout << b << endl;

    // cout<<*b<<endl; we cannot do this with void , we have to use the concept of typecasting
    
    int *c = (int *)b;
    cout << c << endl;
    cout << *c << endl;

    // another way of typecasting in c++
    int *d = reinterpret_cast<int *>(b);

    // function call
    cout<<"before function call\n";
    cout << *d << endl;
    cout<<endl;
    fun(d);    
    cout<<"after function call\n";
    cout<<*d<<endl;
    return 0;
}