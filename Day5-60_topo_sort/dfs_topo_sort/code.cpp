// here we are going to use dfs to find the topological sort of a directed acyclic graph
#include <bits/stdc++.h>
using namespace std;
void TopoSort(vector<int>adj[],int v, stack<int>&s , vector<bool>&visited, int node)
{
    visited[node]=1;

    for(int j=0;j<adj[node].size();j++)
    {
        if(!visited[adj[node][j]])
        TopoSort(adj, v, s, visited, adj[node][j]);
    }

    s.push(node);
    return;
}
vector<int>FindTopoSort(vector<int>adj[],int v)
{
    stack<int>s;
    vector<bool>visited(v,0);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            TopoSort(adj, v, s, visited,i);
        }
    }
    vector<int>ans(v,0);
    int i=0;
    while(!s.empty())
    {
        int node=s.top();
        s.pop();

        ans[i]+=node;
        i++;
    }
    return ans;
}

int main(){
    vector<int>adj[]={{1},{2},{3},{},{0},{4,3}};
    // cout<<adj.size()<<endl;
    // the above operation is not applicable

    vector<int>ans=FindTopoSort(adj, 6);

    for (int i = 0; i < 6; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}