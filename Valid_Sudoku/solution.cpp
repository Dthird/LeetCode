class Solution {
public:
    /* not debuged
    bool helper(vector<vector<char> > &board, int flag, int x, int y){
        if(flag == 0){// row
            for(int i=0 ; i<=7 ; i++)
                for(int j=i+1 ; j<=8 ; j++)
                    if(board[x][i] == board[x][j] && board[x][i] != '.')
                        return false;
            return true;
        }
        else if(flag == 1){//column
            for(int i=0 ; i<=7 ; i++)
                for(int j=i+1 ; j<=8 ; j++)
                    if(board[i][y] == board[j][y] && board[i][y] != '.')
                        return false;
            return true;
        }
        else{//sub_box
            char A[9];
            A[0] = board[x][y];
            A[1] = board[x][y+1];
            A[2] = board[x][y+2];
            A[3] = board[x+1][y];
            A[4] = board[x+1][y+1];
            A[5] = board[x+1][y+2];
            A[6] = board[x+2][y];
            A[7] = board[x+2][y+1];
            A[8] = board[x+2][y+2];
            for(int i=0 ; i<=7 ; i++)
                for(int j=i+1 ; j<=8 ; j++)
                    if(A[i] == A[j] && A[i] != '.')
                        return false;
            return true;
        }
    }

    bool isValidSudoku(vector<vector<char> > &board) {
        for(int i=0 ; i<=8 ; i++){
            if(!helper(board, 0, i, 0))
                return false;
            if(!helper(board, 1, 0, i))
                return false;
        }
        for(int i=0 ; i<=6 ; i++)
            for(int j=0 ; j<=6 ; j++)
                if(!helper(board, 3, i, j))
                    return false;
        return true;
    }
    */
    bool isValidSudoku(vector<vector<char> > &board) {
            int n = board.size();
            vector<unordered_map<int,int> > rows(n);
            vector<unordered_map<int,int> > columns(n);
            vector<unordered_map<int,int> > boxes(n*n/9);
            int num, boxIndex;
            for(int i=0; i< n; ++i){
                for(int j=0; j<n; ++j){
                    if(board[i][j] == '.')
                        continue;
                    num = board[i][j]-'0';
                    boxIndex = (i/3)*n/3+(j/3);
                    rows[i][num]++;
                    columns[j][num]++;
                    boxes[boxIndex][num]++;
                    if( rows[i][num]  > 1 || columns[j][num] > 1 || boxes[boxIndex][num] > 1)
                        return false;
                }
            }
            return true;
        }
};
