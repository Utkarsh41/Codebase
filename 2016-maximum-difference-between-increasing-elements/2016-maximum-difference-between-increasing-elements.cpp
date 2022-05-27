class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }
    int maximumDifference(vector<int>& nums) {
        
        int minprice=INT_MAX,maxprof=0;
        
        for(int i=0;i<nums.size();i++){
            minprice = min(minprice,nums[i]);
            maxprof = max(maxprof,nums[i]-minprice);
        }
        if(maxprof==0)maxprof=-1;
        return maxprof;
        
    }
};