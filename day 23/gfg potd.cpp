class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    vector <bool> vis(V,false);
	    queue<pair<int,int>>q;
	    q.push({0,0});
	    while(!q.empty()){
	        pair<int,int> cur=q.front();
	        q.pop();
	        int node=cur.first;
	        int level  = cur.second;
	        vis[node]=true;
	        if(node==X){
	            return level;
	        }
	        for(auto neighbour : adj[node]){
	            if(!vis[neighbour]){
	                q.push({neighbour,level+1});
	            }
	       }	
	        
        }
        return -1;
	}
};