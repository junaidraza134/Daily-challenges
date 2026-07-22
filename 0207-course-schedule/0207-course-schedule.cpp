class Solution {
public:
    
    bool canFinish(int V, vector<vector<int>> &edges) {
        // code here
     vector<vector<int>> adj(V);
        vector<int> indeg(V,0);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][1];
            int v=edges[i][0];
            adj[u].push_back(v);
            indeg[v]++;
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        int count=0;
        vector<int> result;
        while(q.size()>0){
            int curr=q.front();
            q.pop();
            count++;
            // result.push_back(curr);
            for(int neigh:adj[curr]){
                indeg[neigh]--;
                if(indeg[neigh]==0){
                    q.push(neigh);
                }
            }
        }
        // if(count!=V){
        //     return true;
        // }
        // return false;
        return count == V;
    }
};