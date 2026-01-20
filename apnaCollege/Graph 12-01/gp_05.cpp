/*
      Cycle Detection

*/

class Solution{
    public: 
    bool isCycle(int V, vector<int> adj[]){
        vector<bool> visited(V,false);

        for(int i=0;i<V;i++){
             if(!visited[i] && isCycleDfs(adj,i, visited, -1)){
                //visited bhi nahi hai and 
                //cycle bhi hia

                return true; //cycle hai 
             }
        }

    }
}


