// here we are going to use kahn's algorithm
// another name of bfs
#include <bits/stdc++.h>
using namespace std;
vector<int>topoSort(vector<int>adj[], int v)
{
    // first we are going to find the indegree array
    vector<int>inDeg(v,0);

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            inDeg[adj[i][j]]++;
        }
    }
    
    // push all the node of zero indegree into queue
    queue<int>q;

    for(int i=0;i<v;i++)
    {
        if(!inDeg[i])
        q.push(i);
    }

    vector<int>ans;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
        // neighbour ki indegree ko ek se decrease kardo
        for(int j=0;j<adj[node].size();j++)
        {
            inDeg[adj[node][j]]--;

            if(inDeg[adj[node][j]]==0)
            q.push(adj[node][j]);
        }
    }
    return ans;
}
int main(){
    vector<int>adj[]={{1},{},{1},{1},{1},{6},{7,9},{8},{9},{}};
    // cout<<adj.size()<<endl;
    // the above operation is not applicable

    vector<int>ans=topoSort(adj, 10);

    for (int i = 0; i < 10; i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}