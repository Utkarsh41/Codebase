class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    int mySqrt(int x) {
        
        if(x==0)return 0;
        // if()
        
        else{
      long long  int l=1,h=x,res=1;
        while(l<=h){
            
           long long int m=l+(h-l)/2;
          long long  int sq=m*m;
            
            if(sq==x)return m;
            
            if(sq>x){
                h=m-1;
            }
            else{
                res=m;
                l=m+1;
            }
            
        }
        return res;
        }
    }
};