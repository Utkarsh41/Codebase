class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    bool isPowerOfFour(int n) {
        
        while(n>1){
         if(n%4)return 0;
            n/=4;
        }
        return n==1;
        
    }
};