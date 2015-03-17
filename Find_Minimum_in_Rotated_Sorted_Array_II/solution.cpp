class Solution {
public:
    int findMin(vector<int> &num) {
        for(int i=0 ; i<num.size()-1 ; i++){
            if(num[i] > num[i + 1])
                return num[i+1];
        }
        return num[0];
    }
};
