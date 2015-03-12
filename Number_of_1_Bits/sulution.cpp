#include <iostream>
#include <stdint.h>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n != 0){
            if(n % 2 == 1)
                count++;
            n /= 2;
        }
        return count;
    }
};

int main(){
    Solution s;
    cout << s.hammingWeight(11) << endl;
    return 0;
}
