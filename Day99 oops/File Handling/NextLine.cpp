#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream fout;
    fout.open("zoom.txt");
    fout<<"Hello India\n";
    fout<<"Hello Manoj\n";
    fout<<"Hello Kamla\n";
    fout.close();

    ifstream fin;
    fin.open("zoom.txt");

    string line;

    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}