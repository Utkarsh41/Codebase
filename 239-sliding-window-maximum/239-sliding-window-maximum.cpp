class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        list<int>l;
        
        int we=0,ws=0 ;
        
        while(we<nums.size()){
            
            if(l.empty()){
               l.push_back(nums[we]); 
            }
            
            else{
                
            while(!l.empty() && l.back()<nums[we] ){
                l.pop_back();
            }
            l.push_back(nums[we]);
            }
            
            if(we-ws+1 < k){
                we++;
            }
            
            else if(we-ws+1 ==k){
                
                res.push_back(l.front());
                
                if(l.front()==nums[ws]){
                    l.pop_front();
                }
                ws++;we++;
            }                                 
            
        }
        return res;
    
    }
};