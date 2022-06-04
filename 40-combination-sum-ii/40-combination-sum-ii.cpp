class Solution {
public:
    
      void ut(vector<int>& candidates, int target,vector<vector<int>>&res,
         vector<int>&tp,int i){
        
        if(target==0){
            res.push_back(tp);return;
        }
        if(target<0 || i>=candidates.size()){
            return;
        }
          
        for(int u=i;u<candidates.size();u++){
            if(u>i && candidates[u]==candidates[u-1]){
                continue;
            }
            if(candidates[u]>target){
                break;
            }
              tp.push_back(candidates[u]);
                ut(candidates,target-candidates[u],res,tp,u+1);// BackTrack
                tp.pop_back();
              
        }
          
              
              
         
       
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
    sort(candidates.begin(),candidates.end());
        
         vector<vector<int>>res;
         vector<int>tp;
        
        ut(candidates,target,res,tp,0);
        return res;
        
    }
};