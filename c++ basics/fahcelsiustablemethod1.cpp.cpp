#include <iostream>

using namespace std;

int main()
{
    // Print table header
    cout << "Fahrenheit   Celsius" << endl;
    cout << "---------------------" << endl;

    // Generate and print the table
    for (int fahrenheit = 0; fahrenheit <= 100; fahrenheit += 10)
    {
        double celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << fahrenheit << "           " << celsius << endl;
    }

    return 0;
}