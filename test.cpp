#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
    
        int m = obstacleGrid.size();
        if(m == 0)
            return 0;
        int n = obstacleGrid[0].size();
        if(m == 1 && n == 1)
            if(obstacleGrid[0][0] == 1)
                return 0;
            else
                return 1;
        if(obstacleGrid[m-1][n-1] == 1)
            return 0;
        
        for(int i=0 ; i<m ; i++)
            for(int j=0 ; j<n ; j++)
                if(obstacleGrid[i][j] == 1)
                    obstacleGrid[i][j] = -1;
  
        for(int i=0 ; i<n ; i++)
            if(obstacleGrid[0][i] == 0)
                obstacleGrid[0][i] = 1;
            else
                break;
        for(int i=0 ; i<m ; i++)
            for(int j=0 ; j<n ; j++)
                cout << obstacleGrid[i][j] << " ";
        

        for(int i=0 ; i<m ; i++)
            if(obstacleGrid[i][0] != -1)
                obstacleGrid[i][0] = 1;
            else
                break;

        for(int i=1 ; i<m ; i++){
            for(int j=1 ; j<n ; j++){
                if(obstacleGrid[i-1][j] == -1 && obstacleGrid[i][j-1] == -1)
                    obstacleGrid[i][j] = 0;
                if(obstacleGrid[i-1][j] == -1)
                    obstacleGrid[i][j] = obstacleGrid[i][j-1];
                if(obstacleGrid[i][j-1] == -1)
                    obstacleGrid[i][j] = obstacleGrid[i-1][j];
                else
                    obstacleGrid[i][j] = obstacleGrid[i][j-1] + obstacleGrid[i-1][j];
            }
        }
        
        for(int i=0 ; i<m ; i++)
            for(int j=0 ; j<n ; j++)
                cout << obstacleGrid[i][j] << " ";
        
        return obstacleGrid[m-1][n-1];
    }
};

int main(){
    Solution s1;
    vector<vector<int> > s;
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(0);
    s.resize(1, vec);
    s1.uniquePathsWithObstacles(s);
	return 0;
}


