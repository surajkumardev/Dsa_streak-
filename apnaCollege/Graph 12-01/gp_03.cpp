// Detect Cycle in Undirected Graph using DFS
// Detect Cycle in Undirected Graph using BFS
// Detect Cycle in Directed Graph using DFS

/*
       BFS TRAVERSAL OF THE GRAPH

*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;



//BFS CODEE
// BFS for single connected component
vector<int> bfs(vector<vector<int>>& adj) {
    int V = adj.size();
    vector<bool> visited(V, false);
    vector<int> res;
    
    queue<int> q;
    
    int src = 0;
    visited[src] = true;
    q.push(src);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        res.push_back(curr);

        // visit all the unvisited
        // neighbours of current node
        for (int x : adj[curr]) {
            if (!visited[x]) {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    
    return res;
}

/*

//bfs traversal code 
void bfs(Node* root, vector<int> &level){
    if(root==NULL){
        return;
    }
    queue<Node*> q; 
    q.push(root);
    while(!q.empty()){
        int size=q.size(); 
        for(int i=0;i<size;i++){
            Node*  node=q.front();
            q.pop();
            level.push_back(node->data);

            //left hai to 
            if(node->left!=NULL){
                q.push(node->left);
            }

            if(node->right!=NULL){
                q.push(node->right);
            }
        }
    }
}
*/

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int V = 5;
    vector<vector<int>> adj(V);
    
    // creating adjacency list
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);

    vector<int> res = bfs(adj);

    for (int i : res)
        cout << i << " ";
}