#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph;
int V, E;
vector<int> result;
stack<int> st;

void dfs(int u, vector<int> &visited) {
    visited[u] = 1;
    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs(v, visited);
        }
    }
    st.push(u);
}

void topoSort() {
    vector<int> visited(V, 0);
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            dfs(i, visited);
        }
    }

    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
}

int main() {
    cin >> V >> E;
    graph.resize(V);

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    topoSort();

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
}
