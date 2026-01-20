//Topological Sorting _> 
/*
Notes=> 
Only Takes place in the directed graph 
u-> V arrow ja raha hai 
//first u then v will come 



Notes-> Topological Sorting 
1. Only Directd Graph mai hoga
2. No cycle should be there 
3. DAG(DIRECTED ACYCLIC GRAPH )
4. phale meere bacho ko stack mai dalo
5. then mereko stack mai dalo

*/


//code of the topological sorting 

//how to create a graph by yourself to check the different 
//dfs, bfs, cycle detection, directed, undirected, joined ,unjoined , 
//topological sorting 

#include<iostream> 
#include<vector>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;


void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//do the topological sorting 
void topologicalSort(vector<vector<int>> adj, int u, int v){

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




    ///codes 
    
    return 0;
}