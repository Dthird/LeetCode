#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int romanCharToInt(char c) {
        switch (c) {
        case 'I':   return 1;
        case 'V':   return 5;
        case 'X':   return 10;
        case 'L':   return 50;
        case 'C':   return 100;
        case 'D':   return 500;
        case 'M':   return 1000;
        default:    return 0;
        }
    }
    int romanToInt(string s) {
        int n = romanCharToInt(s[0]);
        for(int i=1 ; i<s.length() ; i++){
            char pre = s[i-1];
            if(romanCharToInt(pre) < romanCharToInt(s[i])){
                n += romanCharToInt(s[i]) - 2 * romanCharToInt(pre);
            }
            else{
                n += romanCharToInt(s[i]); 
            }
            
        }
        return n;
    }
};

int main(){
    Solution s;
    cout << s.romanToInt("MMMCMXCIX");
    return 0;
}


