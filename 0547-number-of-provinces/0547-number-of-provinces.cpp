class Solution1 {
public:
      void dfs(int root, vector<int>& vis, vector<int> adj[]){
        if (vis[root])return;
        vis[root]=1;
        for (auto val : adj[root]){
            dfs(val,vis,adj);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n= isConnected.size();
        int cnt=0;
        vector<int> vis(n+1,0);
        // create adjacency list:
        vector<int> adj[n+1];
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (i!=j && isConnected[i][j]){
                    adj[i+1].push_back(j+1);
                }
            }
        }
        for (int i=1; i<=n; i++){
            if(!vis[i]){
                dfs(i,vis,adj);
                cnt++;
            }
        }
        return cnt;
        
    }
};

class Solution {
public:

    vector<int>v;
	
    int find_set(int x){
        if(!v[x])
            return x;
        return v[x]=find_set(v[x]);
    }
	
    void union_(int a,int b){
        int s_a=find_set(a);
        int s_b=find_set(b);
        if(s_a==s_b) return;
        else v[s_a]=s_b;
    }
	
    int findCircleNum(vector<vector<int>>& M) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);
        int n=M.size();
        vector<int> parent(n);
        v= vector<int>(n,0);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
            if(M[i][j])
                union_(i,j);
        }
			int c=0;
			for(auto i:v)
				if(!i) c++;
        
        return c;
    }
};