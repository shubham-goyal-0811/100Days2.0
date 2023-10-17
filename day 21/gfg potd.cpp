class Solution{
public:

    void dfs(vector<int> adj[],vector<int> &vis,int index){
        vis[index]=1;
        for(auto x: adj[index]){
            if(vis[x]!=1)
                dfs(adj,vis,x);
        }
        return ;
        
    }
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        // code here
        vector<vector<int>> ans;
        vector<int> adj[N];
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i!=j and graph[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0;i<N;i++){
            vector<int> vis(N,0);
            vis[i]=1;
            dfs(adj,vis,i);
            ans.push_back(vis);
        }
        return ans;
    }
};