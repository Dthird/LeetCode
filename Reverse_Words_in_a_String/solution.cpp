#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Solution {
public:

    void reverseWords(string &s) {
        string res = "";
        string pattern = " ";
        int pos = s.find(pattern, 0);
        while(pos < s.size()){
            if(pos != 0){
                string temp = "";
                for(int i=0 ; i< pos ; i++)
                    temp += s[i];
            
                res.insert(0, temp);
                res.insert(0, pattern);
            }
            s.erase(0, pos+1);
            pos = s.find(pattern, 0);
        }
        if(s.size() > 0){
            res.insert(0, s);
        }
        if(res[0] == ' ')
            res.erase(0, 1);
        s = res;
        //cout << s << "+" <<endl;
        return ;
    }
};

int main(){
    Solution s;
    string str = "    test a dog    ";
    s.reverseWords(str);
	return 0;
}


