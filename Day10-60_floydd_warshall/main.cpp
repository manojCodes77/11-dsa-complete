#include <bits/stdc++.h>
using namespace std;
#define MAX_VAL 100000000
string s="jai shree ram";
void floydWarshall(vector<vector<int>> &grid)
{
    int n = grid.size();
    for (int inter = 0; inter < n; inter++)
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
        if (grid[i][inter] == MAX_VAL || grid[inter][j] == MAX_VAL)
            continue;
        grid[i][j] = min(grid[i][j], grid[i][inter] + grid[inter][j]);
    }    
    return;
}
int main()
{
    vector<vector<int>> dist = {
        {0, 4, MAX_VAL, 5, MAX_VAL},
        {MAX_VAL, 0, 1, MAX_VAL, 6},
        {2, MAX_VAL, 0, 3, MAX_VAL},
        {MAX_VAL, MAX_VAL, 1, 0, 2},
        {1, MAX_VAL, MAX_VAL, 4, 0}};

    floydWarshall(dist);
    for (int i = 0; i < dist.size(); i++)
    {
        for (int j = 0; j < dist.size(); j++)
        {
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}