#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    void transpose(vector<vector<int> > &matrix){
        int temp;
        for(int i=0 ; i<matrix.size() ; i++){
            for(int j=i ; j<matrix.size() ; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        return ;
    }

    void reflect(vector<vector<int> > &matrix){
        int temp;
        for(int i=0 ; i<matrix.size() ; i++){
            for(int j=0 ; j<matrix.size()/2 ; j++){
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.size()-j-1];
                matrix[i][matrix.size()-j-1] = temp;
            }
        }
        return ;
    }

    void rotate(vector<vector<int> > &matrix) {
        transpose(matrix);
        reflect(matrix);
        return ;
    }
};
int main(){
    int m = 2;
    int n = 2;
    int *p = new int[m][n];
    *p[0][0] = 1;
    cout << *p[0][0];
	return 0;
}


