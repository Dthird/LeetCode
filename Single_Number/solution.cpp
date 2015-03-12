#include <iostream>

using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
        int num = 0;
        for(int i=0 ; i<n ; i++){
            num ^= A[i];
        }
        return num;
    }
};

int main(){
    int A[] = {1,1,2,3,2,4,4};
    Solution s;
    cout << s.singleNumber(A, 7) << endl;
    return 0;
}


