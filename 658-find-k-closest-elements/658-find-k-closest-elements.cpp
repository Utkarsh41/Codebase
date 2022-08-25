class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    vector<int> findClosestElements(vector<int>& ut, int k, int x) {
        vector<int> res;
    priority_queue<pair<int, int>> uMaxh;
    for (int i = 0; i < ut.size(); i++)
    {
        uMaxh.push({abs(ut[i] - x), ut[i]});
        if (uMaxh.size() > k)
        {
            uMaxh.pop();
        }
    }
    while (uMaxh.size() > 0)
    {
        res.emplace_back(uMaxh.top().second);
        uMaxh.pop();
    }
        sort(res.begin(),res.end());
    return res;
    }
};