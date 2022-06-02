class Solution {
public:
    Solution() { ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr); }

    vector<vector<int>> transpose(vector<vector<int>>& A) {
	vector<vector<int>> vRes(A[0].size(), vector<int>(A.size(), 0));
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A[0].size(); j++) {
			vRes[j][i] = A[i][j];
		}
	}
	return vRes;
}
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
//         vector<vector<int>> res(matrix[0].size(), vector<int>(matrix.size(), 0));
        
//         for(int i=0;i<matrix.size();i++){
            
//             for(int j=0;j<matrix[0].size();i++){
                
//                 res[j][i]=matrix[i][j];
                
//             }
//         }
//         return res;
        
//     }
};