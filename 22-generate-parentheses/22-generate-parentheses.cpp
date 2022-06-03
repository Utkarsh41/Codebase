class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    void ut( vector<string>&v,string &out,int Copen,int Cclose,int Ropn ,int Rclos ){
        
        if(Ropn==0 && Rclos==0){
            v.push_back(out);
            return;
        }
        if(Ropn>0){
            out.push_back('(');
            ut(v,out,Copen+1,Cclose,Ropn-1 ,Rclos);
            out.pop_back();
        }
         if(Rclos>0 && Copen > Cclose){
            
            out.push_back(')');
            ut(v,out,Copen,Cclose+1,Ropn ,Rclos-1);
            out.pop_back();

        }
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string>v;
        
        string out="(";
        int Copen=1,Cclose=0,Ropn=n-1,Rclos=n;
        
        ut(v,out,Copen,Cclose,Ropn ,Rclos);
        return v;
        
    }
};