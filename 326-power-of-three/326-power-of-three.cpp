class Solution {
public:
        Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

    bool isPowerOfThree(int n) {
        // if(n<=0)return 0;
        
       return ( n>0 &&  1162261467%n==0);
        
        
    }
};