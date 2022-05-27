class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int numberOfSteps(int num) {
        
        long int res=0;
        
        while(num>0){
            
            if(num%2==0){
                ++res;
                num/=2;
            }
            else{
                num-=1;++res;
            }
            
        }
        return res;
        
    }
};