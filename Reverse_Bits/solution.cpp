#include <iostream>
#include <stdint.h>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int a[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int k = 0;
        while(n != 0){
            a[k] = n % 2;
            k++;
            n /= 2;
        }
        
        n = a[0];
        for(int i=1 ; i<32 ; i++){
            n = n * 2 + a[i];
        }
        return n;
    }
};

int main(){
    Solution s;
    cout << s.reverseBits(43261596);
    return 0;
}


