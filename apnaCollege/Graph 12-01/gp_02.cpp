
/*
       DFS TRAVERSAL OF THE GRAPH

*/
#include<iostream> 
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;

class Solution {
public:
    // ---------- DFS ----------
    void DFS(int u,
             unordered_map<int, vector<int>> &adj,
             vector<bool> &visited,
             vector<int> &result) {

        visited[u] = true;
        result.push_back(u);

        for (int v : adj[u]) {
            if (!visited[v]) {
                DFS(v, adj, visited, result);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> mp[]) {

        unordered_map<int, vector<int>> adj;

        for (int u = 0; u < V; u++) {
            for (int v : mp[u]) {
                adj[u].push_back(v);
            }
        }

        vector<bool> visited(V, false);
        vector<int> result;

        DFS(0, adj, visited, result);

        return result;
    }

    // ---------- BFS ----------
    vector<int> bfsOfGraph(int V, vector<int> mp[]) {

        unordered_map<int, vector<int>> adj;

        for (int u = 0; u < V; u++) {
            for (int v : mp[u]) {
                adj[u].push_back(v);
            }
        }

        vector<bool> visited(V, false);
        vector<int> result;
        queue<int> q;

        q.push(0);
        visited[0] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            result.push_back(node);

            for (int v : adj[node]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }

        return result;
    }
};


//dfs Code Graph Data Structure 

void dfsRec(vector<vector<int>> &adj, 
vector<bool> &visited, int s, vector<int> &res) {

    visited[s] = true;

    res.push_back(s);

    // Recursively visit all adjacent vertices
    // that are not visited yet

    for (int i : adj[s])
        if (visited[i] == false)
            dfsRec(adj, visited, i, res);

}

vector<int> dfs(vector<vector<int>> &adj) {
    vector<bool> visited(adj.size(), false);
    vector<int> res;
    dfsRec(adj, visited, 0, res);
    return res;
}

//IF the graph is disconnected 


void dfsRec(vector<vector<int>> &adj, 
vector<bool> &visited, int s, vector<int> &res) {
    
    visited[s] = true;

    res.push_back(s);

    // Recursively visit all adjacent 
    // vertices that are not visited yet
    for (int i : adj[s])
        if (visited[i] == false)
            dfsRec(adj, visited, i, res);
}

vector<int> dfs(vector<vector<int>> &adj) {
    vector<bool> visited(adj.size(), false);
    vector<int> res;
    // Loop through all vertices 
    // to handle disconnected graph
    for (int i = 0; i < adj.size(); i++) {
        if (visited[i] == false) {
            dfsRec(adj, visited, i, res);
        }
    }

    return res;
}