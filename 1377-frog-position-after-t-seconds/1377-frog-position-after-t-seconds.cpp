class Solution {
public:
    vector<vector<int> > G;
    vector<bool> seen;
    int target;
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        
        
        if (n == 1) return 1.0;
        this->target = target;
        G.resize(n + 1, vector<int>());
        for (auto e : edges) {
            int u = e[0], v = e[1];
            G[u].push_back(v);
            G[v].push_back(u);
        }
        seen = vector<bool>(n + 1, false);
        return dfs(1,t);
    }
    double dfs(int i, int t) {
        // When time finishes or adjacent list is of size 1.
        if (i != 1 && G[i].size() == 1 || t == 0) {
            return i == target;
        }
        seen[i] = true;
        double res = 0;
        for (auto j : G[i]) {
            if (! seen[j]) {
                res += dfs(j, t - 1);
            }
        }
        return res / (G[i].size() - (i != 1));
    }
};