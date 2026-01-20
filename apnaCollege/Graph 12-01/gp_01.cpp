/*
        CREATE A GRAPH FROM THE USER INPUT 

*/
#include<iostream> 
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool dfs(int node, unordered_map<int, vector<int>> &adj,
             vector<int> &vis, vector<int> &pathVis) {

        vis[node] = 1;
        pathVis[node] = 1;

        for (int nei : adj[node]) {
            if (!vis[nei]) {
                if (dfs(nei, adj, vis, pathVis))
                    return true;
            }
            else if (pathVis[nei]) {
                return true;
            }
        }

        pathVis[node] = 0;
        return false;
    }

    bool solve(int n, unordered_map<int, vector<int>> &adj) {
        vector<int> vis(n, 0), pathVis(n, 0);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                if (dfs(i, adj, vis, pathVis))
                    return false;
            }
        }
        return true;
    }

    bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {

        unordered_map<int, vector<int>> adj;
        //how to create a graph 
        for (vector<int> &vec : prerequisites) {
            int u = vec[0];
            int v = vec[1];
            adj[v].push_back(u);
        }

        return solve(numCourses, adj);
    }
};
