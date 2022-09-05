class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    int lengthOfLIS(vector<int>& nums) {
        
            int n=nums.size();
            int ut[n];
            ut[0] = 1;
            int res = ut[0];
            for (int i = 1; i < n; i++)
            {
                ut[i] = 1;
                for (int j = 0; j < i; j++)
                {
                    if (nums[j] < nums[i])
                    {
                        ut[i] = max(ut[i], ut[j] + 1);
                    }
                }
                
                res = max(res, ut[i]);
            }
            
            return res;
        
        
    }
};