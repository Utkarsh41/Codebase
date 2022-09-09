class Solution {
public:Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    vector<long long> sumOfThree(long long num) {
        // vector<long long>ut;
        if(num%3!=0)return {};
        
        else{
            long long x=num/3;
            if((x-1)+(x)+(x+1)==num){
                return {x-1,x,x+1};
            }
            else{
                return {};
            }
        }
    }
};