class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        
        sort(nums.begin(),nums.end(),[](const string &u,const string &t){
            return u.size()!=t.size() ? u.size()>t.size():u>t;
        });
        
        return nums[k-1];
        
    }
};