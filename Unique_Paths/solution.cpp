class Solution {
public:
    /*time limited
    int uniquePaths(int m, int n) {
        if(m == 1 && n == 1 || m == 0 || n == 0)
            return 0;
        if(m == 1 && n == 2 || m == 2 && n == 1)
            return 1;
        
        return uniquePaths(m-1, n) + uniquePaths(m, n-1);
    }
    */
    //DP solution
    int uniquePaths(int m, int n){
        vector<vector<int>> all;
        vector<int> row;
        row.resize(n, 1);
        all.resize(m, row);
        for(int i=1 ; i<m ; i++){
            for(int j=1 ; j<n ; j++)
                all[i][j] = all[i][j-1] + all[i-1][j];
        }
        return all[m-1][n-1];
    }
};
