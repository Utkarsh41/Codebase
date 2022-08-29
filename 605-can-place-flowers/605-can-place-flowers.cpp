class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.push_back(0);
        flowerbed.insert(flowerbed.begin(),0);
        
        for(int i=1;i<flowerbed.size()-1;i++){
            if((flowerbed[i-1]+  flowerbed[i]+ flowerbed[i+1])==0){
                // flowerbed[i+2]=1;
                --n;++i;
            }
            // else if(flowerbed[i]==0 && flowerbed[i+1]==1 && flowerbed[i+2]==0){
            //     flowerbed[i+3]=1;
            //     --n;
            // }
            
        }
        
        return n<=0;
        
    }
};