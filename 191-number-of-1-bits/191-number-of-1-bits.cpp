class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int hammingWeight(uint32_t n) {
           ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        cout.tie(NULL);
       return __builtin_popcount(n);
    }
};