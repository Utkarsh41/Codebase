class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n-2;i++){
            int j=lower_bound(nums.begin()+i+1,nums.end(),nums[i]+diff)-nums.begin();
            if(j<nums.size() && nums[j]==nums[i]+diff){
                int k=lower_bound(nums.begin()+j+1,nums.end(),nums[j]+diff)-nums.begin();
                
                if(k<n && nums[k]==nums[j]+diff){
                    cnt++;
                }
                
            }
        }
        return cnt;
    }
};