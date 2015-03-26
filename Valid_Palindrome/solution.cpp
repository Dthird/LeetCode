class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
                temp += s[i];
            if(s[i] >= 'A' && s[i] <= 'Z')  
                temp += s[i] - 'A' + 'a';
        }
        if(temp == "")
            return true;
        for(int i=0 ; i<temp.size()/2 ; i++){
            if(temp[i] != temp[temp.size()-1-i])
                return false;
        }
        return true;
    }
};
