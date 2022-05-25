class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
//         if(nums.size()==1)return false;
//         sort(nums.begin(),nums.end());
        
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1])return true;
//         }
//         return false;
        
        set<int>s;
        for(auto c:nums){
            if(s.find(c)!=s.end())return true;
            else{
                s.insert(c);
            }
        }
        return false;
        
        
//         unordered_map<int,int>m;
//         bool res(false);
        
//         for(int i=0;i<nums.size();i++){
//             m[nums[i]]++;
//         }
        
//         for(auto c:m){
//             if(c.second>1){
//                 res=true;
//             }
//         }
//         return res;
    }
};