class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         
        unordered_set<int>ut;
         unordered_set<int>st(nums1.begin(),nums1.end());
        for(auto c:nums2){
            if(st.find(c)!=st.end()){
                ut.insert(c);
            }
        }
        vector<int>res(ut.begin(),ut.end());
        return res;
    }
};