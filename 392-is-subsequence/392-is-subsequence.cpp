class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int u=s.length(),x=t.length();
        int i=0,j=0;
        while(i<u && j<x){
            
            if(s[i]==t[j])i++;
            
            j++;
        }
        return i==u;
        
    }
};