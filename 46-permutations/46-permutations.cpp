class Solution {
public:
    
    void ut(int idx,vector<int>nums,vector<vector<int>>&ans){
        
        if(idx==nums.size()){
            ans.push_back(nums);return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            ut(idx+1,nums,ans);
            swap(nums[i],nums[idx]);

        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        ut(0,nums,ans);
        
        return ans;
        
    }
};