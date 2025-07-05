#include <bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertex >> edges;

    // undirected weighted graph
    vector<pair<int, int>> AdjList[vertex];

    int u, v, weight;
    for (int i = 0; i < edges; i++) {
        cout << "Enter the vertices and weight of the edge: ";
        cin >> u >> v >> weight; // u and v are the vertices of the edge, weight is the weight of the edge
        AdjList[u].push_back({v, weight});
        AdjList[v].push_back({u, weight});
    }

    // printing the adjacency list
    cout << "Adjacency list: " << endl;
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (int j = 0; j < AdjList[i].size(); j++) {
            cout << "(" << AdjList[i][j].first << ", " << AdjList[i][j].second << ") ";
        }
        cout << endl;
    }
    return 0;
}
