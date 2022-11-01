class Solution1 {
public:
    int ut(string u,string v,int n,int m){
        
        if(n==0)return m;
        if(m==0)return n;
        
        if(u[n-1]==v[n-1]){
            return ut(u,v,n-1,m-1);
        }
        
        else{
            return 1+min({ut(u,v,n,m-1),ut(u,v,n-1,m),ut(u,v,n-1,m-1)});
        }
        
        
    }
    int minDistance(string word1, string word2) {
        
        int n=word1.length()-1;
        int m=word2.length()-1;
        
        return ut(word1,word2,n,m);
    }
};

class Solution {
public:
   int editDistanceTabulation(string u, string t, int m, int n)
{
    // int ut[m + 1][n + 1];
    vector<vector<int>>ut(m+1,vector<int>(n+1,0));
    for (int i = 1; i <= m; i++)
    {
        ut[i][0] = i;
    }
    for (int j = 1; j <= n; j++)
    {
        ut[0][j] = j;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (u[i - 1] == t[j - 1])
            {
                ut[i][j] = ut[i - 1][j - 1];
            }
            else
            {
                ut[i][j] = 1+min({ut[i - 1][j], ut[i - 1][j - 1], ut[i][j - 1]});
            }
        }
    }
    return ut[m][n];
}
    int minDistance(string word1, string word2) {
        
        int m=word1.size();
        int n=word2.size();
        
        int res= editDistanceTabulation(word1,word2,m,n);
        return res;
    }
};