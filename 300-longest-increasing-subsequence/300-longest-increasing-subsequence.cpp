class Solution {
public:
    
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    
 int getCeil( vector<int>tail, int st, int end, int key)
{
    while (st < end)
    {
        int m = st + (end - st) / 2;
        if (tail[m] >= key)
        {
            end = m;
        }
        else
        {
            st = m + 1;
        }
    }
    return st;
}
    
    
    int lengthOfLIS(vector<int>& nums) {
        
            int n=nums.size();
        
    vector<int>tail(n,0);
    int len = 1;
    tail[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > tail[len - 1])
        {
            tail[len] = nums[i];
            len++;
        }
        else
        {
            int cl = getCeil(tail, 0, len - 1, nums[i]);
            tail[cl] = nums[i];
        }
    }
    for (auto c : tail)
        cout << c << " ";
    cout << endl;
    return len;
//             int ut[n];
//             ut[0] = 1;
//             int res = ut[0];
//             for (int i = 1; i < n; i++)
//             {
//                 ut[i] = 1;
//                 for (int j = 0; j < i; j++)
//                 {
//                     if (nums[j] < nums[i])
//                     {
//                         ut[i] = max(ut[i], ut[j] + 1);
//                     }
//                 }
                
//                 res = max(res, ut[i]);
//             }
            
//             return res;
        
        
    }
};