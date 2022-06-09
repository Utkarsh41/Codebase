class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int i=0,j=matrix[0].size()-1;
        
        while(i<matrix.size() && j>=0){
            
            if(matrix[i][j]==target){
                return true;
            }
            
            else if(matrix[i][j]>target){
                j--;
            }
            else{
                i++;
            }
            
        }
        return false;
        
    }
    
};