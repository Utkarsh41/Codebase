class SolutionRecursive {
public:
    // complexity n^sqrt(n)
    int help(int n){
         
//      Base case
        if(n<0)return 0; // if less than 0 no ans
        if(n==0)return 1; // if equal to no ans=1
        
        int res=INT_MAX;
        
        for(int i=1;i<=sqrt(n);i++){
            res = min(res,1 + help(n-i*i));
        }
        return res;

        
    }
    int numSquares(int n) {
//         Recursive 
        int res=help(n)-1; // -1 because 0 pr bhi cut laga rehe hai.
        
        return res;
    }
};

class SolutionMemo {
public:
//  Complexity n*sqrt(n)
    int help(int n,vector<int>&dp){
         
//      Base case
        if(n<0)return 0; // if less than 0 no ans
        if(n==0)return 1; // if equal to no ans=1
        
        if(dp[n]!=-1)return dp[n]; // overlapping problem
        int res=INT_MAX;
        
        for(int i=1;i<=sqrt(n);i++){
            res = min(res,1 + help(n-i*i,dp));
        }
        return dp[n] = res;

        
    }
    int numSquares(int n) {
//         Recursive 
        vector<int>dp(n+1,-1);
        int res=help(n,dp)-1; // -1 because 0 pr bhi cut laga rehe hai.
        
        return res;
    }
};


class Solution {
public:
//  Complexity n*sqrt(n)
    int numSquares(int n) {
        
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 3;
        if(n==0)return 0;

        
        vector<int>dp(n+1,INT_MAX);
        
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        dp[3]=3;
        
        for(int i=4;i<=n;i++)
        {
            for(int j=1;j<=sqrt(n);j++){
                
                if(i>=j*j){
                    dp[i]=min(dp[i],1+dp[i-j*j]);
                }
                
            }
        }
        return dp[n];
            
        

    }
};

