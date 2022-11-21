class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=size(gain);
        vector<int>ps(n+1,0);
        ps[1]=gain[0];
        for(int i=1;i<n;i++){
            ps[i+1]=(gain[i]+ps[i]);
        }
        // for(auto c:ps)cout<<c<<" ";
        // cout<<endl;
        return *max_element(ps.begin(),ps.end());
        
    }
};