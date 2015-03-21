#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        if(k == 1){
            vector<vector<int> > res;
            for(int i=1 ; i<=n ; i++){
                vector<int > vec;
                vec.push_back(i);
                res.push_back(vec);
            }
            return res;
        }
        vector<vector<int> > res = combine(n-1, k-1);
        vector<vector<int> > nres;
        for (int i = 0; i < res.size(); i++)
        {
            for (int x = res[i].back()+1; x <= n; x++)
            {
                vector<int> vec = res[i];
                vec.push_back(x);
                nres.push_back(vec);
            }
        }
        return nres;
    }
};

int main(){
    Solution s;
    vector<vector<int> > res;
    res = s.combine(4,2);
    for(int i=0 ; i<res.size() ; i++){
        for(int j=0 ; j<res[0].size() ; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}


