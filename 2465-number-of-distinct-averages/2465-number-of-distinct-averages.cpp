class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        vector<int>arr=nums;
        sort(arr.begin(),arr.end());
        
    
        float avg=0.0f;
        set<float>st;
        
        // for(auto c:arr)cout<<c<<" ";
        // cout<<endl;
        
        int l=0,h=nums.size()-1;
        
        while(l<=h){
            
            avg=(float)(arr[l++]+arr[h--])/2;
            // cout<<avg<<endl;
            st.insert(avg);
            
        }
        
        
        return st.size();
        
        
    }
};