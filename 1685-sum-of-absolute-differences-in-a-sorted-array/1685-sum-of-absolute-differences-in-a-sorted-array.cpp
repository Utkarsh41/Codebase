class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<int> getSumAbsoluteDifferences(vector<int>& a) {
        int n=a.size();
        vector<int>ans(n),l(n,0),r(n,0);
        
        for(int i=1;i<n;i++) l[i]=l[i-1]+(a[i]-a[i-1])*i;
    
        for(int i=n-2;i>=0;i--) r[i]=r[i+1]+(a[i+1]-a[i])*(n-i-1);
    
    
        for(int i=0;i<n;i++) ans[i]=l[i]+r[i];
         
        // for(int i=0;i<nums.size();i++){
        //     int s=0;
        //     for(int j=0;j<nums.size();j++){
        //         s+=abs(nums[i]-nums[j]);
        //     }
        //     res.push_back(s);
        // }
        return ans;
    }
};