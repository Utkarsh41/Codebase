class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
            
        }
        int mostFreq=-1,curr=-1;
        for(auto nm:mp){
            cout<<nm.first<<"-"<<nm.second<<endl;
           
            if(curr<nm.second){
                curr=nm.second;
                mostFreq=nm.first;
            }
            else if(curr==nm.second){
                mostFreq=min(mostFreq,nm.first);
            }
            
        }
        
        return mostFreq;
    }
};