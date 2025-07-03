#include<bits/stdc++.h>
using namespace std;
int V, E;
vector<vector<int>> graph;
vector<int> visited;

void DFS(int src){

    visited[src] = 1;
    cout << src << " ";

    for(int u : graph[src]){
        if(!visited[u]){
            DFS(u);
        }
    }
}

int main(){
    cin >> V>> E;
    graph.resize(V);
    visited.resize(V, 0);

    for(int i=0; i<E; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int src;
    cin >> src;
    DFS(src);
}
