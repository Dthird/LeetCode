#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    string digitToString(char ch){
        switch(ch){
        case '0': return " ";
        case '1': return "";
        case '2': return "abc";
        case '3': return "def";
        case '4': return "ghi";
        case '5': return "jkl";
        case '6': return "mno";
        case '7': return "pqrs";
        case '8': return "tuv";
        case '9': return "wxyz";
        default: return "";
        }
    }
   

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 2){
            string s1 = digitToString(digits[0]);
            string s2 = digitToString(digits[1]);
            for(int i=0 ; i<s1.size() ; i++){
                string temp = "";
                temp += s1[i];
                for(int j=0 ; j<s2.size() ; j++){
                    //temp += s2[j];
                    res.push_back(temp + s2[j]);
                }
                
            }
            return res;
        }
        if(digits.size() == 1){
            string s = digitToString(digits[0]);
            for(int i=0 ; i<s.size() ; i++){
                string temp = "";
                temp += s[i];
                res.push_back(temp);
            }
            return res;
        }
        if(digits.size() == 0)
            return res;
        
        //cout << "111" << endl;
        char last = digits[digits.size()-1];
        //cout << "1.5" << endl;
        digits.erase(digits.end()-1);
        res = letterCombinations(digits);
        
        //cout << "222"  << endl;
        vector<string> nres;
        string s = digitToString(last);
        for(int i=0 ; i<res.size() ; i++){
            for(int j=0 ; j<s.size() ; j++){
                nres.push_back(res[i] + s[j]);
            }
        }
        return nres;
    }

};

int main(){
    Solution s;
    vector<string > res;
    res = s.letterCombinations("234");
    for(int i=0 ; i<res.size() ; i++)
        cout << res[i] << endl;
	return 0;
}


