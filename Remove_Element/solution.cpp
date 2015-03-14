class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int all = n;
        int count = 0;
        for(int i=0 ; i<n ; ){
            if(A[i] == elem){
                count++;
                A[i] = A[n-1];
                n--;
            }
            else{
                i++;
            }
        }
        return all-count;
    }
};
