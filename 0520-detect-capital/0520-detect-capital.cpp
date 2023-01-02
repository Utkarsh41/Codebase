class Solution {
public:
    bool detectCapitalUse(string word) {
        int uc=0,n=word.length();
        
        if(n==1)return true;
        
        for(char c:word){
            if(isupper(c))uc++;
        }
        if(uc==n || uc==0 || (uc==1 && isupper(word[0])))return true;
       
        
        return false;

        
    }
};