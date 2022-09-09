class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    bool isThree(int n) {
        unordered_set<int> ut = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101 };
        return (int)sqrt(n)*sqrt(n) ==n && ut.count(sqrt(n));
        
    }
};