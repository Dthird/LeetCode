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

    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        vector<int> vec;
        if(numRows <= 0)
            return res;
        vec.resize(1, 1);
        if(numRows == 1){
            res.push_back(vec);
            return res;
        }
        if(numRows == 2){
            res.push_back(vec);
            vec.resize(2, 1);
            res.push_back(vec);
            return res;
        }
        res.push_back(vec);
        vec.resize(2, 1);
        res.push_back(vec);
        while(numRows != 2){
            vec = helper(vec);
            res.push_back(vec);
            numRows --;
        }
        return res;
    }
};
