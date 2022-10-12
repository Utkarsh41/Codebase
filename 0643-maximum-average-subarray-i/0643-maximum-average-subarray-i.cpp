class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int n=nums.size();
        int we=0,ws=0;
        double res=INT_MIN,sum=0.0,avg=0.0;
        while(we<n){
//             Calculation
            sum+=nums[we];
            
            if(we-ws+1 <k){
                we++;
            }
            else if(we-ws+1 == k){
                avg=sum/k;
                res=max(res,avg);
                sum-=nums[ws];

                we++;ws++;
            }           
           
            
            
        }
        return res;
        
    }
};