class Solution {
public:
    int findMin(vector<int> &num) {
        vector<int>::iterator it;
        for(it=num.begin() + 1 ; it<num.end() ; it++){
            if(*(it-1) > *(it))
                return *(it);
        }
        
        return *(num.begin());
    }
};
