#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> helper(vector<int> vec){
        vector<int> res;
        res.resize(1, 1);
    }

    vector<vector<int> > generate(int numRows) {
        
    }
};

int main(){
    vector<int> ms, res;
    ms.push_back(1);
    ms.push_back(2);

    res.resize(ms.size() + 1, 1);
    for(int i=0 ; i<res.size() ; i++)
        cout << res[i] << " ";
	return 0;
}


