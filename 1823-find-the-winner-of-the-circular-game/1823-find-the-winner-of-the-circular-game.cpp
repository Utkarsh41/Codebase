class Solution {
public:
    
    int ut(int n,int k){
        if(n==1)return 0;
        
        return (ut(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        
        return ut(n,k)+1;
        
    }
};