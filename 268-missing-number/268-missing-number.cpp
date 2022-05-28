class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int res(n);
        vector<int> aux(n+1,0);
        
        for(int i=0;i<nums.size();i++){
            aux[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(aux[i]==0)res= i;
        }
        return res;
    }
};