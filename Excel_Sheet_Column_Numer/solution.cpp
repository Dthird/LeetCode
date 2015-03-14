#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int n = s[0] - 'A' + 1;
        for(int i=1 ; i<s.length() ; i++){
            n = n * 26 + s[i] - 'A' + 1;
        }
        return n;
    }
};

int main(){
    Solution s;
    string str = "AABBCD";
    for(int i=0 ; i<str.length() ; i++){
        int n = str[i] - 'A' + 1;
        cout << str[i] << ":" << n ;
    }
    return 0;
}


