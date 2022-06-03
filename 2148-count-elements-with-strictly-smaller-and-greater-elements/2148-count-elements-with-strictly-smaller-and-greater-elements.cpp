class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int countElements(vector<int>& nums) {
        
        int cnt=0;
        
        int mx=*max_element(nums.begin(),nums.end());
        int mn=*min_element(nums.begin(),nums.end());

        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mn && nums[i]<mx)cnt++;
        }
        return cnt;
        
    }
};