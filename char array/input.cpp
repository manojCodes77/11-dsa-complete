// char array are nothing but strings
#include <iostream>
using namespace std;
int main(){
    char name[10];
    // name[3]='\n';
    cout<<"enter the string : "<<endl;
    cin>>name;
    name[3]='\0';//storing null index at 2nd character

    cout<<"your name is : "<<name<<endl;
    cout<<name[9];

    return 0;
}