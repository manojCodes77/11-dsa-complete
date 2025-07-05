// here we are going to learn about file handling using c++
#include <iostream>
#include<fstream>
using namespace std;
int main(){
    // open the file
    ofstream fout;
    fout.open("zoom.txt");

    // writing in the file
    fout<<"jai shree ram !";
    fout.close();

    return 0;
}
