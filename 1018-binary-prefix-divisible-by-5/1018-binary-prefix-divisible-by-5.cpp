class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
         vector<bool>res;
        int ut=0;
        for(int i=0; i<nums.size(); i++)
        {
            ut = (ut*2 + nums[i])%5;
            res.push_back(ut==0);
        }
        return res;
    }
};
// [0,1,1]
// [1,1,1]
// [0,1,1,1,1,1]