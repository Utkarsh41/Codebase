class Solution {
public:
    bool isHappy(int n) {
        if(n==1)return true;
        if(n==4)return false;
        return isHappy(help(n));
    }
    private:
    int help(int n){
        int res=0;
        while(n){
            int rem=n%10;
            res = res+ rem*rem;
            n/=10;
        }
        return res;
    }
};