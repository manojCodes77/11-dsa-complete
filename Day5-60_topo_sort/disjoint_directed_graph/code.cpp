// here we are only discussing about how do we find dfs of disjoint directed graph
// we are not about to concern w.r.t. topological sort
#include <bits/stdc++.h>
using namespace std;
void DFS(int node, vector<int> & ans ,vector<bool>&visited , vector<int>adj[])
{
    visited[node]=1;
    ans.push_back(node);

    for(int j=0;j<adj[node].size();j++)
    {
        if(!visited[adj[node][j]])
        DFS(adj[node][j], ans, visited, adj);
    }
    return ;
}
vector<int>findingDFS(vector<int>adj[], int v)
{
    vector<bool>visited(v,0);
    vector<int>ans;

    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        DFS(i,ans,visited,adj);
    }

    return ans;
}
int main(){
    // vector<int>adj[]={{1},{},{1},{1},{1},{6},{7},{8},{9},{6}};
    vector<int>adj[]={{1},{2},{3},{},{0},{4}};
    // cout<<adj.size()<<endl;
    // the above operation is not applicable

    vector<int>ans=findingDFS(adj, 6);

    for (int i = 0; i < 6; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}