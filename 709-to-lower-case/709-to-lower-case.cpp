class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.length();i++){
//             
            if((s[i]>='A' && s[i]<='Z')){
                // s[i]=tolower(s[i]);
                s[i]=s[i]+'a'-'A';
            }
        }
        return s;
    }
};