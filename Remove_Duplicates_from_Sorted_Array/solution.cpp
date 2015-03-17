class Solution {
public:
    /*time limit
    int removeDuplicates(int A[], int n) {
        for(int i=1 ; i<n ; i++){
            if(A[i-1] == A[i]){
                for(int j=i ; j<n ; j++){
                    A[j-1] = A[j];
                }
                n--;
            }
        }
        return n;
    }
    */
    
    int removeDuplicates(int A[], int n) {
        int p = 1;
        for(int i=1 ; i<n ; i++){
            if(A[i] != A[i-1]){
                A[p] = A[i];
                p++;
            }
        }
        return min(p, n);
    }
};
