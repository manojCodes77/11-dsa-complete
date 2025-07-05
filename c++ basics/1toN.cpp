#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "enter a number\n";
    cin >> N;
    int count = 0;
    int i = 1;
    while (i <= N)
    {
        if (i % 5 == 0)
        {
            i += 2;
            continue;
        }
        cout << i << "\n";

        count++;

        i += 1;
    }

    cout << "count is " << count << "\n";
}
// 😎