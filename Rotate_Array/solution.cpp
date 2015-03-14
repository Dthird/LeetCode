#include <iostream>

using namespace std;

class Solution {
public:
    void reverse(int nums[], int start, int end){
        for(int i=start ; i<=(start+end)/2 ; i++){
            int temp = nums[i];
            nums[i] = nums[end - i + start];
            nums[end - i + start] = temp;
        }
        return ;
    }

    void rotate(int nums[], int n, int k) {
        k %= n; // input: [-1], 1 , 2
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
        return ;
    }
};

int main(){
    Solution s;
    int nums[] = {1,2,3,4,5,6,7};
    /*
    s.reverse(nums, 0 ,3);
    s.reverse(nums, 4, 6);
    s.reverse(nums, 0, 6);
    */
    s.rotate(nums, 7, 3);
    for(int i=0 ; i<7 ; i++){
        cout << nums[i] << " ";
    }
    return 0;
}


