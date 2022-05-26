// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int firstBadVersion(int n) {
        if(n==1)return 1;
        int l=1,h=n,res=-1;
        
        while(l<=h){
            int m = l+(h-l)/2;
            
            if(isBadVersion(m)){
                res=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return res;
        
    }
};