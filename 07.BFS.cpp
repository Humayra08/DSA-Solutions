#include<bits/stdc++.h>
using namespace std;
int V, E;
vector<vector<int>> graph;

void BFS(int src){
    vector<int> visited(V, 0);
    queue<int> q;

    q.push(src);
    visited[src] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int i = 0; i<graph[u].size(); i++){
            int v = graph[u][i];
            if(!visited[v]){
                visited[v] = 1;
                q.push(v);
            }
        }
    }

}

int main(){
    cin>> V >> E;
    graph.resize(V);

    for(int i=0; i<E; i++){
        int u, v;
        cin >>u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int src;
    cin >> src;
    BFS(src);

    return 0;
}
