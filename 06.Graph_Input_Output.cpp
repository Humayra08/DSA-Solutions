#include <bits/stdc++.h>
using namespace std;

int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> graph(V);

    cout << "Enter " << E << " edges (u v):" << endl;

    for(int i = 0; i<E; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

  // Remove for directed graphs

    // Printing adjacency list
    cout << "\nGraph adjacency list:\n";
    for(int i = 0; i<V; i++){
        for(int neighbour : graph[i]){
            cout << neighbour << " ";
    }
    cout << endl ;
    }
    return 0;
}
