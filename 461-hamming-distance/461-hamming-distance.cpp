class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int hammingDistance(int x, int y) {
        
        int ut=(x^y),t(0);
        while(ut){ut&=ut-1;++t;}
        return t;
        
    }
};