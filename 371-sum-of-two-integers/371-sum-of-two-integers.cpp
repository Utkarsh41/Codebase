class Solution {
public:Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int getSum(int a, int b) {
        
        while(b>0){
            ++a;--b;
        }
        while(b<0){
            ++b;--a;
        }
        return a;
    }
};