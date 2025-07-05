#include <iostream>
#include<vector>
using namespace std;
int mod=1e9+7;
int f(int *arr,int index,int sum,vector<vector<int>>&dp)
{
    if (sum == 0) return 1;   // There's exactly one way to get sum 0: pick nothing
    if (index < 0) return 0;  // If we've run out of elements, we can't form any more sums

    if (dp[index][sum] != -1) return dp[index][sum];

    int pick = 0;
    if (arr[index] <= sum) {
        pick =(1+ f(arr, index, sum - arr[index], dp)) % mod;
    }

    int notpick = f(arr, index - 1, sum, dp) % mod;

    return dp[index][sum] = (pick + notpick) % mod;
}
int main(){
    int n = 0;
    cin >> n;

    int sum = 0;
    cin >> sum;

    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));

    cout << f(arr, n - 1, sum, dp) << endl;

    delete[] arr;  // Don't forget to free allocated memory

    return 0;
}