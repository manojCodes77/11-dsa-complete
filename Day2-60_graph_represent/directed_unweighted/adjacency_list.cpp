// here we are going to design an adjacency list
// directed unweighted graph
#include <bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertex >> edges;

    // adjacency list
    vector<vector<int>> AdjList(vertex);

    int u, v;
    for (int i = 0; i < edges; i++) {
        cout << "Enter the vertices of the edge: " <<i;
        cin >> u >> v; // u and v are the vertices of the edge
        AdjList[u].push_back(v);
    }

    // printing the adjacency list
    cout << "Adjacency list: " << endl;
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (auto edge : AdjList[i]) {
            cout << edge << " ";
        }
        cout << endl;
    }

    return 0;
}
