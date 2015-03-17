class Solution {
public:
    /* bits limited
    vector<int> plusOne(vector<int> &digits) {
        vector<int> res;
        long long sum = 0;
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
    */
    vector<int> plusOne(vector<int> &digits) {
        for(int i= digits.size() - 1 ; i >= 0 ; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i]++;
                break;
            }
        }
        if(digits[0] == 0){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
