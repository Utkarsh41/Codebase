class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>fmp,smp;
        
        for(int i=0;i<s.length();i++){
            fmp[s[i]]=i+1;
            smp[t[i]]=i+1;

        }
        
        for(int i=0;i<s.length();i++){
            
            if(fmp[s[i]]!=smp[t[i]]){
              return false;
            }
            
        }
        
        
        return true;
    }
};