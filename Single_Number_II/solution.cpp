class Solution {
public:
    /*
To solve this problem using only constant space, you have to rethink how the numbers are being represented in computers -- using bits.

If you sum the ith bit of all numbers and mod 3, it must be either 0 or 1 due to the constraint of this problem where each number must appear either three times or once. This will be the ith bit of that "single number".

A straightforward implementation is to use an array of size 32 to keep track of the total count of ith bit.

int singleNumber(int A[], int n) {
    int count[32] = {0};
    int result = 0;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < n; j++) {
            if ((A[j] >> i) & 1) {
                count[i]++;
            }
        }
        result |= ((count[i] % 3) << i);
    }
    return result;
}

We can improve this based on the previous solution using three bitmask variables:

    ones as a bitmask to represent the ith bit had appeared once.
    twos as a bitmask to represent the ith bit had appeared twice.
    threes as a bitmask to represent the ith bit had appeared three times.

When the ith bit had appeared for the third time, clear the ith bit of both ones and twos to 0. The final answer will be the value of ones.

int singleNumber(int A[], int n) {
    int ones = 0, twos = 0, threes = 0;
    for (int i = 0; i < n; i++) {
        twos |= ones & A[i];
        ones ^= A[i];
        threes = ones & twos;
        ones &= ~threes;
        twos &= ~threes;
    }
    return ones;
}


     */
    int singleNumber(int A[], int n) {
        map<int, int> m;
        for(int i=0 ; i<n ; i++){
            map<int, int>::iterator it = m.find(A[i]);
            if(it != m.end()){
                it->second ++;
            }
            else{
                m.insert(map<int, int>::value_type(A[i], 1));
            }
        }
        for(int i=0 ; i<n ; i++){
            if(m[A[i]] != 3)
                return A[i];
        }
    }
};
