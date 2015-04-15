#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        int m = matrix.size();
        if(m == 0)
            return ;
        int n = matrix[0].size();

        int firstRow = 1 - matrix[0][0];
        int firstCol = 1 - matrix[0][0];

        for(int i=1 ; i<m ; i++)
            if(matrix[i][0] == 0)
                firstCol = 1;
        for(int j=1 ; j<n ; j++)
            if(matrix[0][j] == 0)
                firstRow = 1;

        for(int i=1 ; i<m ; i++){
            for(int j=1 ; j<n ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i=1 ; i<m ; i++){
            if(matrix[i][0] == 0)
                for(int j=1 ; j<n ; j++)
                    matrix[i][j] = 0;
        }

        for(int j=1 ; j<n ; j++){
            if(matrix[0][j] == 0)
                for(int i=0 ; i<m ; i++)
                    matrix[i][j] = 0;
        }

        if(firstRow == 1)           
            for(int j=0 ; j<n ; j++)
                matrix[0][j] = 0;
        if(firstCol == 1)
            for(int i=0 ; i<m ; i++)
                matrix[i][0] = 0;
        return ;
    }
};

int main(){

	return 0;
}


