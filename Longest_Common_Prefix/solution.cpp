class Solution {
public:
    string helper(string a, string b){
        string temp = "";
        int n = min(a.size(), b.size());
        for(int i=0 ; i<n ; i++){
            if(a[i] == b[i])
                temp += a[i];
            else{
                break;
            }
        }
        return temp;
    }

    string longestCommonPrefix(vector<string> &strs) {
        if(strs.size() == 0)
            return "";
        string res = strs[0];
        for(int i=1 ; i<strs.size() ; i++){
            res = helper(res, strs[i]);
        }
        return res;
    }
};
