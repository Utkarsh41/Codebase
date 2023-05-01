class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>res;
        for(int i=0;i<m;i++){
            res.push_back(nums1[i]);
        }
         for(int i=0;i<n;i++){
            res.push_back(nums2[i]);
        }
        // for(auto c:res)cout<<c<<" ";
        
        nums1=res;
        sort(nums1.begin(),nums1.end());
    }
};