class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n = mat.size();
        for(int i=0; i<n; ++i){
            sum = sum + mat[i][i] + mat[n-i-1][i];
        }
        if (n%2 == 0)
            return sum;
        return sum - mat[n/2][n/2];
    }
};