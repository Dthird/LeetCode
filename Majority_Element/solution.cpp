class Solution {
public:
    int majorityElement(vector<int> &num) {
        map<int, int> m;
        for(int i=0 ; i<num.size() ; i++){
            if(m.count(num[i]) == 0)
                m.insert(map<int, int>::value_type(num[i], 1));
            else
                m[num[i]]++;
        }
        for(map<int, int>::iterator it=m.begin() ; it!=m.end() ; it++){
            if(it->second > num.size() / 2)
                return it->first;
        }
    }
};
