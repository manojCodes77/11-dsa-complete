// here in this problem we have to find the minimum distance of each node from 0
// and return that array
#include <bits/stdc++.h>
using namespace std;
vector<int>shortestPath(vector<int>adj[], int v)
{
    vector<int>ans(v,0);
    vector<bool>visited(v,0);

    queue<int>q;
    q.push(0);
    visited[0]=1;

    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        for(int j=0;j<adj[node].size();j++)
        {
            if(!visited[adj[node][j]])
            {
                q.push(adj[node][j]);
                visited[adj[node][j]]=1;
                ans[adj[node][j]]=ans[node]+1;
            }
        }
    }
    // alternative approach
    // int temp=0;
    // while (!q.empty())
    // {
    //     int n=q.size();
    //     while(n--)
    //     {
    //         int node=q.front();
    //         q.pop();
    //         ans[node]=temp;
    //         for(int j=0;j<adj[node].size();j++)
    //         {
    //             if(!visited[adj[node][j]])
    //             {
    //                 q.push(adj[node][j]);
    //                 visited[adj[node][j]]=1;
    //             }
    //         }
    //     }
    //     temp++;
    // }

    for (int i = 0; i < v; i++)
    {
        if(!visited[i])
        ans[i]=-1;
    }
    
    return ans;
}
int main(){
    // vector<int>adj[]={{1,2},{0,5},{0,4,3},{4,2,7},{2,3,8},{1,6},{5,8},{3,8},{7,6}};
    vector<int>adj[]={{1,3},{0,2},{1,4},{0,4},{3,2}};

    vector<int>ans=shortestPath(adj, 5);

    for(int i=0;i<5;i++)
    {
        cout<<"for "<<i<<" shortest distance from 0 will be : "<<ans[i]<<endl;
    }
    return 0;
}