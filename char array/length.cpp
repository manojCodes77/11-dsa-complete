// determine the length a char array
#include <iostream>
using namespace std;
int length(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count ++;
    }
    return count ;
}

int main(){
    char name[20];
    cout<<"enter your name : "<<endl;
    cin>>name;
    int name_length=length(name);
    cout<<"length of your name will be : "<<name_length<<endl;
    return 0;
}