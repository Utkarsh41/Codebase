class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int maxProfit(vector<int>& prices) {
        
        int minprice=INT_MAX,maxprof=INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            minprice = min(minprice,prices[i]);
            maxprof = max(maxprof,prices[i]-minprice);
        }
        return maxprof;
    }
};