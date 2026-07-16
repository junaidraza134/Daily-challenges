class Solution {
public:
    void bfs(int start,vector<vector<int>> &isConnected,vector<bool> &vis){
        int n=isConnected.size();
        queue<int> q;
        q.push(start);
        vis[start]=true;
        while(q.size()>0){
            int u=q.front();
            q.pop();
            for(int j=0;j<n;j++){
                if(isConnected[u][j]==1 && !vis[j]){
                    vis[j]=true;
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                bfs(i,isConnected,vis);
            }
        }
        return count;
        
    }
};