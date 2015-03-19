#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    void helper(vector<vector<int> > &matrix , int n, int num , int x){

        if(n == 1){
            matrix[x][x] = num;
            return ;
        }

        if(n == 2){
            matrix[x][x] = num;
            matrix[x][x+1] = num + 1;
            matrix[x+1][x] = num + 3;
            matrix[x+1][x+1] = num + 2;
            return ;
        }
      
        else{
            for(int i=x ; i<=n-1+x ; i++){
                matrix[x][i] = num;
                num ++;
            }
            for(int i=x+1 ; i<=n-1+x ; i++){
                matrix[i][x+n-1] = num;
                num ++;
            }
            for(int i=n+x-2 ; i>=x ; i--){
                matrix[x+n-1][i] = num;
                num ++;
            }
            for(int i=n-2+x ; i>=x+1 ; i--){
                matrix[i][x] = num;
                num ++;
            }
            
            return helper(matrix, n-2, num, x+1);
        }     
    }
        
        
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > matrix;
        vector<int> row;
        row.resize(n, 1);
        matrix.resize(n, row);
        helper(matrix, n, 1, 0);
        return matrix;
    }
};

int main(){
    vector<vector<int> > m;
    Solution s;
    int n = 4;
    m = s.generateMatrix(n);
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << m[i][j];
            printf("\t");
        }
        cout << endl;
    }
	return 0;
}


