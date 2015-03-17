class Solution {
public:
    int lengthOfLastWord(const char *s) {
        string str = s;
        int count_last = 0;
        int count_new = 0;
        int flag = 0;
        for(int i=0 ; i<str.size() ; i++){
            if(str[i] == ' '){
                if(flag == 0){
                    count_last = count_new;
                    flag = 1;
                }
                count_new = 0;
            }
            else{
                flag = 0;
                count_new++;
            }
        }
        if(str[str.size()-1] == ' ')
            return count_last;
        return count_new;
    }
};
