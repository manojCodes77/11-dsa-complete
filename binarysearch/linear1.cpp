// linear search in a given array

#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr{1, 2, 3, 4, 5};
    cout << "enter your key value : ";
    bool found = false;
    int key;
    cin >> key;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            found = true;
            cout << "your key value has found at the index value of " << i << endl;
        }
    }
    if (!found)
    {
        cout << "your key value has not found at any index .";
    }
    return 0;
}

// this is the most optimal solution 