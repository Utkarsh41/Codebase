class Solution {
public:
    Solution(){ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);}
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        vector<int>ut(n,INT_MAX);
        ut[n-1]=0;
        
        for(int i=n-2;i>=0;i--){
            
            int res=INT_MAX;
            for(int j=i+1;j<=min(n-1,i+nums[i]);j++){
                res=min(res,ut[j]);
            }
            if(res!=INT_MAX){
                ut[i]=res+1;
            }
        }
        return ut[0];
        
    }
};