class SolutionUt {
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

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=s.length(),j=t.length();
        
        return ut(s,t,i,j);
        
    }
    private:
    bool ut(string s,string t,int i,int j){
        if(i==0)return 1;
        if(j==0)return 0;
        
        if(s[i-1]==t[j-1])return ut(s,t,i-1,j-1);
        
        return ut(s,t,i,j-1);
    }
};