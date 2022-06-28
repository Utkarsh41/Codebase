class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<int> partitionLabels(string ut) {
        vector<int> last(26, 0), res;
    for (int i = 0; i < ut.length(); i++)
    {
        last[ut[i] - 'a'] = i;
    }

    // for(auto c:last)cout<<c<<" ";
    // cout<<endl;
    int s = 0, e = 0;

    for (int i = 0; i < ut.length(); i++)
    {
        s=max(s,last[ut[i] - 'a']);

        if(i==s){
            res.push_back(i-e+1);
            e=i+1;
        }
    }
    return res;
    }
};