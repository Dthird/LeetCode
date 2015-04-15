#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        int max1 = word1.size();
        int max2 = word2.size();

        int **ptr = new int*[max1 + 1];
        for(int i = 0; i < max1 + 1 ;i++) 
            ptr[i] = new int[max2 + 1];
        

        for(int i = 0 ;i < max1 + 1 ;i++)
            ptr[i][0] = i;

        for(int i = 0 ;i < max2 + 1;i++)
            ptr[0][i] = i;

        for(int i = 1 ;i < max1 + 1 ;i++){
            for(int j = 1 ;j< max2 + 1; j++){
                int d = 0;
                int temp = min(ptr[i-1][j] + 1, ptr[i][j-1] + 1);
                if(word1[i-1] != word2[j-1])
                    d = 1 ;
                ptr[i][j] = min(temp, ptr[i-1][j-1] + d);
            }
        }

        int dis = ptr[max1][max2];

        for(int i = 0; i < max1 + 1; i++){
            delete[] ptr[i];
            ptr[i] = NULL;
        }

        delete[] ptr;
        ptr = NULL;

        return dis;
    }
};

int main(){

	return 0;
}


