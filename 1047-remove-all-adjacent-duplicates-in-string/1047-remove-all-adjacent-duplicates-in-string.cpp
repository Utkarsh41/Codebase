class Solution1 {
public:
    string removeDuplicates(string s) {
        
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i=-1;
            }
            
        }
        return s;

    }
};
class Solution {
public:
    string removeDuplicates(string s) {
        
        string ut="";
        for(auto c:s){
            if(ut.size() && ut.back()==c)ut.pop_back();
            
            else ut.push_back(c);
        }
        return ut;

    }
};