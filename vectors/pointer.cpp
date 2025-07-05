// extraordinary important note normal arrays are passed as reference parameters , call-by-reference will be take place here 
// but ,also note that this concept is not applicable for vectors and stl arrays
#include <iostream>
#include<array>
using namespace std;
void modify(array<int,5>arr){
    arr[1]=9;
    cout<<arr[1];
}
int main(){
    array<int,5>arr={1,2,3,4,5};
    modify(arr);
    cout<<arr[1];
    return 0;
}