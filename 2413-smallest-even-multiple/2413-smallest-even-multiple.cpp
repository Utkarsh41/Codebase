class Solution {
public:
    int smallestEvenMultiple(int n) {
        int x=2*n;
        
        if(x%2==0){
            int i=2;
            while(i<=n){
               if(i%n==0 && i%2==0){
                   x=i;return x;
               } 
                i++;
            }
        }
        // else{
            return x;
        // }
        
    }
};