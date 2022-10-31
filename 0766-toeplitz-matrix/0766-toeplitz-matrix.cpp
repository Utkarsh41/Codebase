class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        // int temp = matrix[0][0];
        
        int r=matrix.size();
        int c=matrix[0].size();
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
               
                    if(matrix[i][j]!=matrix[i-1][j-1]){
                        return false;
                    }
                    // temp=matrix[i][j];
                
            }
        }
        return true;
        
    }
};