class SolutionRec {
public:
    int solve(int i,int s,vector<int>& nums, vector<int>& multi,int n,int m){
			if(i==m) return 0;
			int front=multi[i]*nums[s]+solve(i+1,s+1,nums,multi,n,m);
			int back=multi[i]*nums[(n-1)-(i-s)]+solve(i+1,s,nums,multi,n,m);
			return max(front,back);
		}

		int maximumScore(vector<int>& nums, vector<int>& multi) {
			int n=nums.size();
			int m=multi.size();
			return solve(0,0,nums,multi,n,m);
		}
};

class SolutionMemo {
public:
	int f(int i,int s,vector<int>& nums, vector<int>& multi,int n,int m,vector<vector<int>>& dp){
		if(i==m) return 0;
		if(dp[i][s]!=-1) return dp[i][s];
		int front=multi[i]*nums[s]+f(i+1,s+1,nums,multi,n,m,dp);
		int back=multi[i]*nums[(n-1)-(i-s)]+f(i+1,s,nums,multi,n,m,dp);
		return dp[i][s]=max(front,back);
	}

	int maximumScore(vector<int>& nums, vector<int>& multi) {
		int n=nums.size();
		int m=multi.size();
		vector<vector<int>> dp(m,vector<int>(m,-1));
		return f(0,0,nums,multi,n,m,dp);
	}
};

class Solution {
public:  
	int maximumScore(vector<int>& nums, vector<int>& multi) {
		int n=nums.size();
		int m=multi.size();
		vector<vector<int>> dp(m+1,vector<int>(m+1,0));
		for(int i=m-1;i>=0;i--){
			for(int s=0;s<=i;s++){
				int front=multi[i]*nums[s]+dp[i+1][s+1];
				int back=multi[i]*nums[(n-1)-(i-s)]+dp[i+1][s];
				dp[i][s]=max(front,back);
			}
            
		}
		return dp[0][0];
	}
};