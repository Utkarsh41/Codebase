class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>res=nums1;
        for(int x:nums2){
            res.emplace_back(x);
        }
        sort(res.begin(),res.end());
        int n=res.size();
        for(auto c:res)cout<<c<<" ";
        cout<<endl;
        if(n%2==0){
            cout<<res[n/2]<<endl;            cout<<res[(n/2)-1]<<endl;

            return (double)(res[n/2]+res[(n/2)-1])/2;

        }
        else{
            return (double)res[n/2];
        }
        
        
    }
};