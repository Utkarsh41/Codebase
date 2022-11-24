class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int res=0;
        map<string,int>u,v;
        
        for(auto c:words1){
            u[c]++;
        }
         for(auto c:words2){
            v[c]++;
        }
        
        // for(auto c:u)cout<<c.first<<" "<<c.second<<endl;
        // for(auto c:v)cout<<c.first<<" "<<c.second<<endl;
        
        if(words1.size() < words2.size())
            swap(words1,words2);
        for(auto &it:words2)
            if(u[it] == 1 && v[it] == 1)
                res++;
        
        
        
        return res;
    }
};