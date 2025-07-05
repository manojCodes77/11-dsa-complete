#include <iostream>
#include<string>
using namespace std;
int main(){
    cout<<"enter any number"<<endl;
    bool found=false;
    string name;
    getline(cin,name);
    cout<<"enter the character"<<endl;
    char character;
    cin>>character;
    cout<<name.length()<<endl;
    for(int i=0;i<name.length();i++){
        if (name[i]==character)
        {
            found =true;
            cout<<"character is present in your name"<<endl;
            // break;
        }
        
    }if (!found)
    {
        cout<<"character is not present in your name"<<endl;
    }
    
    return 0;
}
// this is an example of linear search