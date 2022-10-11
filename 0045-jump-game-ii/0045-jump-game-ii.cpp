class Solution1 {
public:
    Solution1(){ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);}
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
class Solution {
public:
    Solution(){ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);}
    int jump(vector<int>& nums) {
        
        int n=nums.size();
        // if(n==0)return 0;
       
        int end=nums[0];
        int me=nums[0];
        int jump=1;
        if(n==1)return 0;
        
        for(int i=1;i<n-1;i++){
            me=max(me,i+nums[i]);
            if(i==end){
                jump++;
                end=me;
            }
        }
        return jump;
        
    }
};