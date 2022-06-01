class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    bool threeConsecutiveOdds(vector<int>& arr) {
        
        bool chk(0);
        if(arr.size()<3)return false;
        if(arr[0]==1 && arr[1]==1 && arr[2]==1)return 1;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]&1 && arr[i+1]&1 && arr[i+2]&1){
                chk=true;
            }
        }
        return chk;
        
    }
};