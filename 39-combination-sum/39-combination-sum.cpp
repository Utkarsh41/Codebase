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
     
//      Exclude      
        ut(candidates,target,res,tp,i+1);
        
        // include
        tp.push_back(candidates[i]);
        ut(candidates,target-candidates[i],res,tp,i);
        tp.pop_back();


    }
        
        
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>res;
         vector<int>tp;
        
        ut(candidates,target,res,tp,0);
        return res;
        
    }
};