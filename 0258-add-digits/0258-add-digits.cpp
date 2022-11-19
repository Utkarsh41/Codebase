class Solution {
public:
    int addDigits(int num) {
       
        if(num==0)return 0;
        
        int sod = help(num);
        int chk = ok(sod);
         if(chk){
            return sod;
        }
        return addDigits(sod);
    }
    private:
    int help(int n){
        int res=0;
        while(n){
            int nm=n%10;
            res+=nm;
            n/=10;
        }
        return res;
    }
    bool ok(int n){
        int res=0;
        while(n){
            res++;
            n/=10;
        }
        return res==1;
    }
};