// here we are going to design an adjacency matrix
#include <bits/stdc++.h>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edges;

    // indirected unweighted graph
    vector<vector<bool>>adj(vertex,vector<bool>(vertex,0));

    int u,v;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the vertices of the edge: ";
        cin>>u>>v;// u and v are the vertices of the edge
        adj[u][v]=1;
        adj[v][u]=1;
    }

    // printing the adjacency matrix
    cout<<"Adjacency matrix: "<<endl;
    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
