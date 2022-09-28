class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        vector<string>res;
        priority_queue<pair<int,string>>ut;
        int n=names.size();
        for(int i=0;i<n;i++){
            ut.push({heights[i],names[i]});
        }
        
        while(!ut.empty()){
            res.push_back(ut.top().second);
            ut.pop();
            
        }
        return res;
        
    }
};