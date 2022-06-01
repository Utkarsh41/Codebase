class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
         vector<vector<int>>u(numRows);
        
        for(int i=0;i<numRows;i++){
            u[i].resize(i+1);
            u[i][0]=u[i][i]=1;
            
            for(int j=1;j<i;j++){
                u[i][j]=u[i-1][j-1]+u[i-1][j];
            }
        }
        return u;
    }
};