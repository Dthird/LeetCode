#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> res;
        int sum = 0;
        for(int i=0 ; i<digits.size() ; i++){
            sum = sum * 10 + digits[i];
        }
        sum ++;
        while(sum != 0){
            res.insert(res.begin(), sum % 10);
            sum /= 10;
        }
        
        return res;
    }
};

int main(){
    vector<int> a;
    for(int i=9 ; i>=0 ; i--)
        a.push_back(i);
    long long sum = 0;
    for(int i=0 ; i<a.size() ; i++){
        sum = sum * 10 + a[i];
    }
    cout << sum;
	return 0;
}


