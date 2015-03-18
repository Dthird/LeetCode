class Solution {
public:
    vector<int> helper(vector<int> vec){
        vector<int> res;
        res.resize(vec.size() + 1, 1);
        for(int i=1 ; i<res.size()-1 ; i++){
            res[i] = vec[i] + vec[i-1];
        }
        return res;
    }
    
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        if(rowIndex < 0)
            return res;
        if(rowIndex == 0){
            res.resize(1, 1);
            return res;
        }
        res.resize(2, 1);
        if(rowIndex == 1){
            return res;
        }
        while(rowIndex != 1){
            res = helper(res);
            rowIndex--;
        }
        return res;
    }
};

