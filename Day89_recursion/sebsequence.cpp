// subsequence is an another name of power set but each sets has its elements placed in ascending order
#include <bits/stdc++.h>
using namespace std;
void SubSeq(vector<int> &arr, int index, int n, vector<vector<int>> &ans, vector<int> temp)
{
    // base condition
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // if we not filling the temp
    SubSeq(arr, index + 1, n, ans, temp);

    // if we are filling the temp
    temp.push_back(arr[index]);
    SubSeq(arr, index + 1, n, ans, temp);
}
int main()
{
    vector<int> arr = {1, 2, 3};
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> temp;
    SubSeq(arr, 0, n, ans, temp);
    for (auto it : ans)
    {
        for (auto it1 : it)
        {
            cout << it1 << " ";
        }
        cout << endl;
    }

    return 0;
}
