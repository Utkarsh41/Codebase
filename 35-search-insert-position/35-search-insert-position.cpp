class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int searchInsert(vector<int>& nums, int val) {
    int s=0,e=nums.size()-1;
    int m = s+(e-s)/2;
    int res=0;
    while (s<=e)
    {
       m = s+(e-s)/2; 
       if(nums[m]==val)return m;

       if(nums[m]>val){
           e=m-1;
       }
       if(nums[m]<val){
           res=m;
           s=m+1;
       }
    }
    return s;
    }
};