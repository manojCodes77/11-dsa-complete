// here we are going to design an adjacency list
// undirected unweighted graph
#include <bits/stdc++.h>
using namespace std;
int main(){
    int vertex,edges;
    cout<<"Enter the number of vertices and edges: ";
    cin>>vertex>>edges;

    // undirected unweighted graph
    vector<int>AdjList[vertex];

    int u,v;
    for(int i=0;i<edges;i++)
    {
        cout<<"Enter the vertices of the edge: ";
        cin>>u>>v;// u and v are the vertices of the edge
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    // printing the adjacency list
    cout<<"Adjacency list: "<<endl;
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<AdjList[i].size();j++)
        {
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
