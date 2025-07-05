#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;

    // file ko open karo
    fin.open("zoom.txt");

    // file to read kro
    char c;
    // fin>>c;
    c=fin.get();

    // fin.eof() return a boolean value tells us whether fin points to the end of passage or not
    while (!fin.eof())
    {
        cout<<c;
        // fin>>c;
        c=fin.get();
    }
    fin.close();
    
    return 0;
}