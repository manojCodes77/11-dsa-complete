// here we are going to calculate prefix sum
#include <bits/stdc++.h>
using namespace std;
vector<int>prefixSum(int * arr, int n)
{
    vector<int>ans(n);
    ans[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1]+arr[i];
    }
    return ans;
}

// suffix sum
vector<int>suffixSum(int * arr, int n)
{
    vector<int>ans(n);
    ans[n-1]=arr[n-1];
    for (int i=n-2; i>=0; i--)
    {
        ans[i]=ans[i+1]+arr[i];
    }
    
    return ans;
}
int main(){
    int arr[]={1,3,5,8,34,67,0};
    vector<int>ps=prefixSum(arr,7);

    for(int i=0;i<ps.size();i++)
    {
        cout<<"prefix sum upto index "<<i<<" : "<<ps[i]<<endl;
    }
    cout<<endl;
    vector<int>ss=suffixSum(arr,7);

    for(int i=0;i<ps.size();i++)
    {
        cout<<"suffix sum upto index "<<i<<" : "<<ss[i]<<endl;
    }
    return 0;
}
