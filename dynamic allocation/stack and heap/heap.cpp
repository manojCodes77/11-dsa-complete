// basic program to create and delete heap memory
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // memory creation
    int *ptr = new int;
    cout << ptr << endl;

    // before filling any element ;
    cout << *ptr << endl;

    *ptr = 56;
    cout << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 2.4;
    cout << *ptr2 << endl;

    // creation of dynamic array
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    int *p = new int[n];
    // inserting the values
    // cout << "enter the values :";
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }
    cout << "the output will be :\n";
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }

    // delete keyword use
    delete ptr;
    delete ptr2;
    delete []p;

    return 0;
}
