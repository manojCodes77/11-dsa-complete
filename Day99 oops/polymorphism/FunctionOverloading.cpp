// here we have an example of function overlap

// lets perform this using oops

#include <bits/stdc++.h>
using namespace std;
class Area{
    public:
    int cal_area(int r){
        return 3.14*r*r ;
    }
    int cal_area(int l, int b){
        return l*b;
    }
};
int main(){
    Area a;
    int area=a.cal_area( 5);
    cout<<area<<endl;

    area=a.cal_area(56,23);
    cout<<area<<endl;

    return 0;
}
