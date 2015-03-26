class Solution {
public:
    /* time limit
    double pow(double x, int n) {
        double res = 1.0;
        if(n == 0)
            return res;
        else if(n > 0){
            while(n != 0){
                res *= x;
                n--;
            }
            return res;
        }
        else{
            while(n != 0){
                res /= x;
                n++;
            }
            return res;
        }
    }
    */
    double pow(double x, int n){
        if(n == 0)
            return 1.0;
        double res = pow(x, n/2);
        if(n % 2 == 0)
            return res * res ;
        else
            return n < 0 ? 1 / x * res * res : res * res * x;
    }
};
