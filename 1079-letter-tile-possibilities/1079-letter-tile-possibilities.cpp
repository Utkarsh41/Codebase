class Solution {
public:
    void ut(string tiles,string& out,set<string>&res,map<int,bool>&mp){
        for(int i=0;i<tiles.size();i++){
            if(mp[i]==0){
                char ch = tiles[i];
                out.push_back(ch);
                mp[i]=1;
                res.insert(out);
                ut(tiles,out,res,mp);

                out.pop_back(); mp[i]=0;

            }
        }
    }
    int numTilePossibilities(string tiles) {
        
        if(tiles.size()==1)return 1;
        
        string out="";
        set<string>res;
        map<int,bool>mp;
        
        ut(tiles,out,res,mp);
        return res.size();
        
    }
};