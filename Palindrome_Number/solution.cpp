class Solution {
public:
    /* with extra space
    bool isPalindrome(int x) {
        vector<int > helper;
        if(x < 0)
            return false;
        if(x == 0)
            return true;
        else{
            while(x != 0){
                helper.push_back(x % 10);
                x /= 10;
            }
        }
        for(int i=0 ; i<helper.size()/2 ; i++)
            if(helper[i] != helper[helper.size()-1-i])
                return false;
        
        return true;
    }
    */
    bool isPalindrome(int x){
        if (x < 0) return false;

        int p = x; 
        int q = 0; 

        while (p >= 10){
            q *=10; 
            q += p%10; 
            p /=10; 
        }   

        return q == x / 10 && p == x % 10;
    }
};
