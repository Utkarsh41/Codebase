class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);}
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        int i=0,cnt=0;
        for(auto c:mp){
            
            if(c.second>=2){
                nums[i]=c.first;
                i++;
                nums[i]=c.first;
                i++;
                cnt+=2;
            }
            else{
                nums[i]=c.first;
                i++;cnt++;
            }

        }
        return cnt;
    }
};