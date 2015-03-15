#include <iostream>
#include <string>
#include <vector>

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
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    
    vector<int> b;
    b.push_back(4);
    b.push_back(5);
    b.push_back(6);
    
    //b.insert(b.begin(),a.begin(),a.end());
    a.insert(a.end(), b.begin(), b.end());

    for(int i=0;i<a.size();i++)
        cout<<a[i];
	return 0;
}


