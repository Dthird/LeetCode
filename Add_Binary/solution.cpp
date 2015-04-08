class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        int pa = a.length() - 1;
        int pb = b.length() - 1;
        string& res = pa > pb ? a : b;
        int p = max(pa, pb);
        int tmp;
        while ( pa >= 0 && pb >= 0 )
        {
            tmp = a[pa--] - '0' + b[pb--] - '0' + carry;
            res[p--] = (tmp & 1) + '0';
            carry = tmp >> 1;
        }
        while ( p >= 0 )
        {
            tmp = res[p] - '0' + carry;
            res[p--] =  (tmp & 1) + '0';
            carry = tmp >> 1;
        }
        if ( carry )
        {
            res = '1' + res;
        }
        return res;
    }
};
