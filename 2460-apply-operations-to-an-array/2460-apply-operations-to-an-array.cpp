class Solution {
public:
    vector<int> moveZeros(vector<int>&v){
        vector<int>nz,zr;
        for(auto x:v){
            if(x!=0){
                nz.push_back(x);
            }
            else{
                zr.push_back(x);
            }
        }
        for(auto x:zr)nz.push_back(x);
   
        return nz;
    }
    vector<int> applyOperations(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        res=moveZeros(nums);
        return res;
        
    }
};