class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    bool isPerfectSquare(int num) {
        
        long int l=1,h=num;
        while(l<=h){
            
            long int m= l+(h-l)/2;
            long sq=m*m;
            
            if(sq==num){
                return true;
            }
            if(sq>num){
                h=m-1;
            }
            else{
                l=m+1;
            }
            
        }
        return false;
    }
};