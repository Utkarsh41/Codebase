class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        string pat;
        pat.reserve(size(s));
        for(string word:words){
            if(size(pat)<size(s)){
                pat+=word;
            }else break;
        }
        return s==pat;
        
    }
};