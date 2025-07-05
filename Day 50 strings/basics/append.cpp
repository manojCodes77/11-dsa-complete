#include<iostream>
#include<string>
using namespace std;
int main(){
    string firstname="Manoj ";
    string lastname="Singh Rawat";
    string name=firstname+lastname;
    cout<<name<<endl;
    cout<<name.size()<<endl;
    cout<<name[0]<<endl;
    cout<<name.append("ji")<<endl;
    cout<<name<<endl;
      string txt = "We are the so-called \"Vikings\" from the north.";//string ke andar string
  cout << txt<<endl;
    string full_name;
    cout<<"enter the full name"<<endl;
    getline(cin,full_name);
    cout<<"your name is "<<full_name<<endl;

    return 0;
}

