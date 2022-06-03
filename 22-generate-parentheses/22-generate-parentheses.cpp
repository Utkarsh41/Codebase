class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<string>res;
    
    void ut(string s,int o,int c){
        if(o==0 && c==0){
            res.push_back(s);
            return;
        }
        if(o>0){
            s+="(";
            ut(s,o-1,c);
            s.pop_back();
            
        }
        if(c>0 && c>o){
            
            s+=")";
            ut(s,o,c-1);
            s.pop_back();
            
        }
    }
    vector<string> generateParenthesis(int n) {
        
        string s="";
        
        ut(s,n,n);
        return res;
    }
};