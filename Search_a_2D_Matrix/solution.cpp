#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchVector(vector<int> &vec, int target, int start, int end){
        if(start > end)
            return false;
        int mid = (start + end) / 2;
        if(vec[mid] == target)
            return true;
        if(vec[mid] > target)
            return searchVector(vec, target, start, mid - 1);
        else
            return searchVector(vec, target, mid + 1, end);
    }

    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        vector<int> all = matrix[0];
        for(int i=1 ; i<matrix.size() ; i++){
            all.insert(all.end(), matrix[i].begin(), matrix[i].end());
        }
        return searchVector(all, target, 0, all.size() - 1);
    }
};

int main(){
    vector<int> a;
    

	return 0;
}


