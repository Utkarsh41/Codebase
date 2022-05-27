class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    void moveZeroes(vector<int>& nums) {
        int u=0,t=0;
        
        while(t<nums.size()){
            if(nums[t]!=0){
                swap(nums[u++],nums[t]);
            }
            t++;
        }
        
    }
};