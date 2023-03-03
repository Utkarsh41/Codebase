class SolutionTab {
public:
    int dp[2001][2001];
    bool find(vector<int> &stones, int i, int k){
      if(i==stones.size()-1)
          return true;

      if(i>=stones.size()) 
          return false;

      if(dp[i][k]!=-1) 
          return dp[i][k]; 

      bool res = false;
      for(int j=-1;j<=1;j++){
          int next_jump=k+j;
          if(next_jump>0){
                int in= lower_bound(stones.begin(),stones.end(),stones[i]+next_jump)-stones.begin();
                if(in == stones.size() || stones[in]!=stones[i]+next_jump) 
                  continue;

                res=res||find(stones,in,next_jump);
          }
      }

      return dp[i][k]=res;

  }
  
  bool canCross(vector<int>& stones) {
        memset(dp,-1,sizeof(dp));
        return find(stones, 0, 0);
  }
};

class SolutionMemo {
public:
    bool canCross(vector<int>& stones) {
        if(stones[1]-stones[0]>1)
            return false;
        
        if(stones.size()==2)
            return (stones[1]-stones[0]==1);
        
        vector<vector<int>> dp(stones.size(), vector<int> (stones[stones.size()-1]-stones[0], -1));
        return func(0, 1, stones, dp);
    }
    
    bool func(int i, int jumps, vector<int> &stones, vector<vector<int>> &dp){
        if(i==stones.size()-1)
            return true;
            
        if(dp[i][jumps] != -1)
            return dp[i][jumps];
        
        bool ans=false;
        for(int ind=i+1; ind<stones.size(); ind++){
            if(stones[ind]-stones[i]>jumps+1)
                break;
            for(int t=-1; t<2; t++){
                if(stones[ind]-stones[i]==jumps+t)
                    ans = func(ind, jumps+t, stones, dp) || ans;
            }
        }
    
        return dp[i][jumps] = ans;
    }
};

class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int , unordered_set<int>> hashMap;    
        hashMap[stones[0] + 1] = {1};       
        for(int i = 1 ; i < stones.size() ; ++i){       
            int position = stones[i];                   
            for(auto it : hashMap[position]){           
                hashMap[position + it].insert(it);      
                hashMap[position + it + 1].insert(it + 1);
                hashMap[position + it - 1].insert(it - 1);
            }
        }
        return hashMap[stones.back()].size() != 0;     
    }
};