class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
        
        for(auto c:nums){
            res.push_back(pow(abs(c),2));
        }
        sort(res.begin(),res.end());

        return res;
    }
};