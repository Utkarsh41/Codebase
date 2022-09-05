class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    int pivotIndex(vector<int>& nums) {
         int usm=0;
        usm=accumulate(nums.begin(),nums.end(),0);
        
        int ls=0,rs=usm;
        for(int i=0;i<nums.size();i++){
            rs-=nums[i];
            
            if(ls==rs)return i;
            
            ls+=nums[i];
        }
        return -1;
    }
};