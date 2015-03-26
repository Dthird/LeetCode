#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z')
                temp += s[i];
            if(s[i] >= 'A' && s[i] <= 'Z')  
                temp += s[i] - 'A' + 'a';
        }
        cout << temp << endl;
        if(temp == "")
            return true;
        for(int i=0 ; i<temp.size()/2 ; i++){
            if(temp[i] != temp[temp.size()-1-i])
                return false;
        }
        cout << temp << endl;
        return true;
    }
};

int main(){
    string a = "la2";
    Solution s;
    s.isPalindrome(a);
	return 0;
}


