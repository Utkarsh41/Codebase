class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
       int res = nums[0];
        int mxend = nums[0];
        
        for(int i=1;i<(int)nums.size();i++){
            
            mxend = max(mxend+nums[i],nums[i]);
            res = max(res,mxend);
        }
        return res;
        
        
        
    }
};