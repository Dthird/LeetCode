class Solution {
public:
    /*time limit
    int removeDuplicates(int A[], int n) {
        if(n == 0)
            return 0;
        vector<int> res;
        for(int i=0 ; i<n ; i++)
            res.push_back(A[i]);
            
        int flag = 0;
        for(vector<int>::iterator it = res.begin() + 1 ; it<res.end() ; ){
            if(*(it-1) == *it){
                if(flag == 0){
                    flag = 1;
                    it++;
                }
                else{
                    int temp = *it;
                    for(vector<int>::iterator it2 = it + 1 ; it2<res.end() ; ){
                        if(*it2 == temp){
                            vector<int>::iterator it3 = it2;
                            it2++;
                            res.erase(it3);
                        }
                        else
                            break;
                    }
                    
                }
            }
            else{
                flag = 0;
                it ++;
            }
        }
        
        for(int i=0 ; i<res.size() - 1 ; i++)
            A[i] = res[i];
        return res.size();
    }
    */

    int removeDuplicates(int A[], int n) {
        if (n <= 2)
            return n;
        int rear = 1;
        for(int i = 2; i < n; i++){
            if(!(A[i] == A[rear] && A[i] == A[rear -1])){
                A[++rear] = A[i];
            }
        }
        return rear+1;
    }

};
