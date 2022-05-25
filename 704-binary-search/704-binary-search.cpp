class Solution {
public:
    int search(vector<int>& nums, int target) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        
        if(nums[0]==target)return 0;
        
       int l=0,h=nums.size()-1;
        while(l<=h){
            int mid = l+ (h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target) h=mid-1;
            
            else l=mid+1;
        }
        return -1;
        
    }
};