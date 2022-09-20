class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
    int lengthOfLongestSubstring(string s) {
        
        int maxlen=0,ws=0;
        unordered_map<char,int>mp;
        
        for(int we=0;we<s.length();we++){
            char ch=s[we];
            if(mp.find(ch)!=mp.end()){
                int prevInd=mp[ch];
                if(prevInd>=ws){
                    ws=prevInd+1;
                }
            }
            mp[ch]=we;
            maxlen=max(maxlen,we-ws+1);
        }
        return maxlen;
        
    }
};