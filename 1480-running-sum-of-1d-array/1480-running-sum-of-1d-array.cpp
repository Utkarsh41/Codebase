class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<int> runningSum(vector<int>& nums) {
        
        vector<int>res;
        
        int s=0;
        
        for(auto c:nums){
            s+=c;
            res.emplace_back(s);
        }
        return res;
        
    }
};