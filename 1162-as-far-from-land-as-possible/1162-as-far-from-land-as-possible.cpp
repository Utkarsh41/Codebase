class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n = grid.size() ,  m = grid[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    q.push({i,j});
                }
            }
        }

        if(q.size()==0 or q.size()==n*m)  return -1;
        int lvl=-1;

        vector<vector<int>> dir;
        dir.push_back({0,1});
        dir.push_back({1,0});
        dir.push_back({0,-1});
        dir.push_back({-1,0});

        while(!q.empty())
        {
            lvl++;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                auto res=q.front();
                int row=res.first;
                int col=res.second;
                q.pop();
                for(int j=0;j<4;j++)
                {
                    int r=dir[j][0]+row;
                    int c=dir[j][1]+col;
                    if(r<0 or c<0 or r>=n or c>=n or grid[r][c]==1)  continue;
                    q.push({r,c});
                    grid[r][c]=1;
                }
            }
        }
        return lvl;
        
    }
};