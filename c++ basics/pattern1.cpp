/*form a pattern like
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "enter a rows\n";
    cin >> rows;
    cout << "enter a columns\n";
    cin >> columns;
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}