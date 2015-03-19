class Solution {

public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        enum direction{up,right,left,down};
        vector<int> res;
        int m = matrix.size();
        if(m == 0) return res;
        int n = matrix[0].size();

        int ubound = 0;
        int bbound = m - 1;
        int lbound = 0;
        int rbound = n - 1;
        int num = 0;

        direction dir=right;
        while(num < m * n){
            switch(dir){
                case right:
                    for(int i=lbound;i<=rbound;i++){
                        res.push_back(matrix[ubound][i]);
                        num++;
                    }
                    ubound++;
                    dir=down;
                    break;

                case down:
                    for(int i=ubound;i<=bbound;i++){
                        res.push_back(matrix[i][rbound]);
                        num++;
                    }
                    rbound--;
                    dir=left;
                    break;
                case left:
                    for(int i=rbound;i>=lbound;i--){
                        res.push_back(matrix[bbound][i]);
                        num++;
                    }
                    bbound--;
                    dir=up;
                    break;
                case up:
                    for(int i=bbound;i>=ubound;i--){
                        res.push_back(matrix[i][lbound]);
                        num++;
                    }
                    lbound++;
                    dir=right;
                    break;
            }
        }
        return res;

    }
};
