class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int summation = 0;
       int n = mat.size();

       for(int i = 0 ; i < n ; i++)
       {
            summation += mat[i][i];
            summation += mat[i][n - i - 1];
       }

       if(mat.size() %2 != 0)
       {
            summation -= mat[n/2][n/2];
       }

       return summation;
    }
};