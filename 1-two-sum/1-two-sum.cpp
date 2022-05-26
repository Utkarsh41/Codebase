class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<int> twoSum(vector<int>& nums, int target) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<int>ut;
        
        int n = (int)nums.size();
        bool f(false);
        for(int i=0;i<n-1;i++){
            
            for(int j=i+1;j<n;j++){
                
                if(nums[i]+nums[j]==target){
                    
                    ut.push_back(i);
                    ut.push_back(j);
                    f=true;
                    break;

                    
                }
            }
            if(f){
                break;
            }
        }
        return ut;
        
    }
};