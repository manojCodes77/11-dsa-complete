#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// void permut(int * arr, int n, vector<vector<int>>& ans, vector<bool>& visited, vector<int>& temp)
// {
//     if(temp.size()==n)
//     {
//         ans.push_back(temp);
//         return;
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(visited[i]==0)
//         {
//             visited[i]=1;
//             temp.push_back(arr[i]);
//             permut(arr,n,ans,visited,temp);
//             temp.pop_back();
//             visited[i]=0;
//         }
//     }
//     return;
// }
void permut(vector<int>& nums,vector<vector<int>>&ans,int index)
{
    if (index == nums.size() - 1)
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[index], nums[i]);
        permut(nums, ans, index + 1);
        swap(nums[index], nums[i]);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n = 0;
    cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> ans;

    vector<bool> visited(n, 0);

    vector<int> temp;

    // permut(arr, n, ans, visited, temp);
    permut(arr, ans, 0);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
