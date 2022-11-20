class Solution {
public:
    long long countVowels(string word) {
        
        long long int cnt = 0, cur = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
                cur += (i+1);
            cnt += cur;
        }
        return cnt;
        
    }
};