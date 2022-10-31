// TLE because of recursive solution
class Solution1 {
public:
    int ut(string u, string v,int m,int n){
        if(m==0 || n==0)return 0;
        
        if(u[m-1]==v[n-1]){
            return 1+ut(u,v,m-1,n-1);
        }
        else{
            return  max(ut(u,v,m,n-1),ut(u,v,m-1,n));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int m=text1.length();
        int n=text2.length();
        
        return ut(text1,text2,m,n);

    }
};

// Memoization But again getting tle i think because of initialization
class Solution2 {
public:
    int ut(string u, string v,int m,int n,vector<vector<int>>&moi){
        
        if(moi[m][n]!=-1){
            return moi[m][n];
        }
        
        if(m==0 || n==0)return moi[m][n]=0;
        
        if(u[m-1]==v[n-1]){
            moi[m][n] = 1+ut(u,v,m-1,n-1,moi);
        }
        else{
            moi[m][n]=  max(ut(u,v,m,n-1,moi),ut(u,v,m-1,n,moi));
        }
        return moi[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        int m=text1.length();
        int n=text2.length();
        vector<vector<int>>moi(m+1,vector<int>(n+1,-1));
        return ut(text1,text2,m,n,moi);

    }
};


class Solution3 {
public:
    int lcsTabulation(string u, string t, int n, int m)
{
    vector<vector<int>> ut(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (u[i - 1] == t[j - 1])
            {
                ut[i][j] = 1 + ut[i - 1][j - 1];
            }
            else
            {
                ut[i][j] = max((ut[i][j - 1]), ut[i - 1][j]);
            }
        }
    }
    return ut[n][m];
}
    int longestCommonSubsequence(string text1, string text2) {
        
        int m=text1.length();
        int n=text2.length();
        // vector<vector<int>>moi(m+1,vector<int>(n+1,-1));
        return lcsTabulation(text1,text2,n,m);

    }
};


class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        
          int n = s1.size();
                int m = s2.size();
                vector<vector<int>> dp(n+1,vector<int> (m+1,0));
                
                for(int i =0;i<=n;i++){
                    for(int j=0;j<=m;j++){
                        if(i == 0 or j == 0) dp[i][j] = 0;
                        else{
                            if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                        }
                    }
                }
                
                return dp[n][m];
       

    }
};


              