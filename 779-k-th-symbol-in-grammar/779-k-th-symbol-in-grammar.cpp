class Solution {

public:
        Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int kthGrammar(int n, int k) {
        
        if (n == 1 && k == 1)
        return 0;
    int m = pow(2, n - 1) / 2;

    if (k <= m)
        return kthGrammar(n - 1, k);
    else
        return !kthGrammar(n - 1, k - m);
        
    }
};