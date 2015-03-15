class Solution {
public:
    /*
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        else
            return climbStairs(n - 1) + climbStairs(n - 2);
    }
    */
    int climbStairs(int n) {
        if (n == 1) return 1;
        int temp1 = 1;
        int temp2 = 2;
        for (int i = 3; i <= n; ++i) {
            int temp = temp2;
            temp2 = temp1 + temp2;
            temp1 = temp;
        }
        return temp2;
    }
};
