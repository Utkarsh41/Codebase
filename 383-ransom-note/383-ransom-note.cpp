class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       vector<int>aux(26,0);
        
      
       for(int i=0;i<magazine.length();++i){
            aux[magazine[i]-'a']++;
        }
        
          for(auto c:aux)cout<<c<<" ";
        cout<<endl;
        
        for(int i=0;i<ransomNote.length();++i){
            aux[ransomNote[i]-'a']--;
        }
        for(auto c:aux){
            if(c<0){
                return false;
            }
        }
        return true;
    }
};