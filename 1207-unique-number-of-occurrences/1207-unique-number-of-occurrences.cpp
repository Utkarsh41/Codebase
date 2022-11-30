class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n = arr.size();
        unordered_map<int,int>m;
        if(n==2)return false;
        
        for(int i=0;i<n;i++){
           m[arr[i]] ++;
        }
        
        set<int>s;
        
        for(auto c:m){
            if(s.count(c.second)>0){
                return false;
            }
            else{
                s.insert(c.second);
            }
        }
        
        return true;
        
        
    }
};