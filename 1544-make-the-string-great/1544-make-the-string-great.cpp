class Solution {
public:
    string makeGood(string s) {
                
        for(int i=0;i<s.length();i++){
            
            int x=s.length();
            
            if( (s[i]==(s[i+1]+32)) ||  (32+(s[i])==s[i+1]) ){
                
                    s.erase(i,2);
              
            } 
            if(x!=s.length())
            {i=-1;}
        }
       
        return s;
        
    }
};
