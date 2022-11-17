class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum=0,cnt=0;
        for(int c:nums){
            if(c%3==0 && c%2==0){
                sum+=c;
                ++cnt;
            }
        }
        return sum==0?0:sum/cnt;
        
    }
};