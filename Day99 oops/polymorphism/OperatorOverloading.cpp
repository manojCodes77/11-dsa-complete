#include <bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real;
    int img;

    public:
    Complex(int r, int i){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
    // here operator is  a keyword and + is the operator we want to overload
    Complex  operator + (Complex& c){
        Complex temp(0,0);
        temp.real=real+c.real;
        temp.img=img+c.img;
        c.img=98;
        return temp;
    }
};

int main(){
    Complex c1(5,3);
    Complex c2(10,5);
    // now add c1 and c2
    c2.display();
    Complex c3=c1+c2;
    c3.display();

    c2.display();
    return 0;
}
