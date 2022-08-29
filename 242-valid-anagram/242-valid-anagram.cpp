class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    bool isAnagram(string s, string t) {
        
        int a[26]={0};
        if(s.length()!=t.length())return false;
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            a[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(a[i]>0)return false;
        }
        return true;
    }
};