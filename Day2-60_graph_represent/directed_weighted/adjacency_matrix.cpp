#include <bits/stdc++.h>
using namespace std;

int main() {
    int vertex, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertex >> edges;

    // Directed weighted graph
    vector<vector<int>> adj(vertex, vector<int>(vertex, 0)); // Adjacency matrix

    int u, v, weight;
    for (int i = 0; i < edges; i++) {
        cout << "Enter the vertices and weight of the edge: ";
        cin >> u >> v >> weight; // u and v are the vertices of the edge
        adj[u][v] = weight;
    }

    // Printing the adjacency matrix
    cout << "Adjacency matrix: " << endl;
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
