#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    

    string convertToTitle(int n) {
        string result;
        char temp;
        while(n != 0){
            n--;
            temp = 'A' + n % 26;//diff from temp = 'A' + n % 6 - 1;
            result = temp + result;
            n /= 26;
        }
        return result;
    }
};

int main(){
    
    Solution s;
    for(int i=1 ; i<30 ; i++){
        cout << s.convertToTitle(i) << endl;
    }
    
    
    return 0;
}


