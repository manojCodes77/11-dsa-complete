#include <iostream>
using namespace std;

int main() {
    int myArray[10];
    int value = 1;

    // Initialize the array with the value
    for (int i = 0; i < 10; i++) {
        myArray[i] = value;
    }

    // Print the elements of the array
    for (int i = 0; i < 10; i++) {
        cout << myArray[i] << " ";
    }

    cout << endl;

    return 0;
}
