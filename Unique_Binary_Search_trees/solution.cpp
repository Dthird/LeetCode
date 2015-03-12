class Solution {
public:
    int numTrees(int n) {
        int sum = 0;
        if(n == 1 || n == 0)
            return 1;
        else{
            for(int i=1 ; i<=n ; i++)
                sum += numTrees(i - 1) * numTrees(n - i);
        }
        return sum;
    }
};
