class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    int countOperations(int num1, int num2) {
        

        
        long int count(0);

        while(num1!=0 && num2!=0){
            
           if(num1>=num2)num1-=num2;
         
            else num2-=num1;
            count++;
            
        }
        
        return count;
    }
};