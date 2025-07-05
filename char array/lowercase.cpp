// convert each character of a string array into lowercase
// this complete process is based on the ASCII values

#include <iostream>
using namespace std;
char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp = ch -'A' +'a';
        return temp;
    }
}
int main(){
    char ch='L';
    char lowercase=toLowerCase(ch);
    cout<<"lowercase will be : "<<lowercase<<endl;
    return 0;
}