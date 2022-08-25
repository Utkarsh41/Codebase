class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        
        vector<int> res;
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second<2)
                res.emplace_back(x.first);
        }
        return res;
        
    }
};