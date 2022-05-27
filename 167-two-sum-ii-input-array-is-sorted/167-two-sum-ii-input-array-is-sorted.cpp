class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>res;
        
        int l=0,h=numbers.size()-1;
        
        while(l<h){
            
            if(numbers[l]+numbers[h]==target){
                res.emplace_back(l+1);
                res.emplace_back(h+1);
            }
            
           if(numbers[l]+numbers[h]>target){
                h--;
            }
            else{
                l++;
            }
        }
        return res;
        
    }
};