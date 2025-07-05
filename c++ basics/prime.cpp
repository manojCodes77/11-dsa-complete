/*show the a no. is
prime no. or not*/
#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number\n";
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << n << " is a prime no.\n";
        // break;
    }
    for (int i = 2; i < n; i++)
    {
        // if (n == 2)
        // {
        //     cout << n << " is a prime no.\n";
        //     // break;
        // }
        if (n % i == 0)
        {
            cout << n << " is not a prime no.\n";
            break;
        }
        else
        {
            cout << n << " is a prime no.\n";
            break;
        }
    }
}