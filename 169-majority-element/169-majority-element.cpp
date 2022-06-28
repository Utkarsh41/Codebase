class Solution {
public:Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int majorityElement(vector<int>& nums) {
        
        int count=0,candidate=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
                candidate=nums[i];
            if(nums[i]==candidate)
                count++;
            else
                count--;
        }
        return candidate;
        
//         unordered_map<int,int>m;
        
//         for(int i=0;i<size(nums);i++){
//             m[nums[i]]++;
//         }
//         auto res(0);
//         for(auto c:m){
//             if(c.second >size(nums)/2){
//                 res= c.first;
//             }
//         }
        // return res;
    }
};