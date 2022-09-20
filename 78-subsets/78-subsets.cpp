class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
    }
    
    void ut(int i,vector<int>& nums,vector<int>& ds, vector<vector<int>>&ans){
        
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        ut(i+1,nums,ds,ans);
        ds.pop_back();
        ut(i+1,nums,ds,ans);

        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        
        ut(0,nums,ds,ans);
        return ans;
    }
};