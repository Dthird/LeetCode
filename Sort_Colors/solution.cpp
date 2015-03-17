class Solution {
public:
    void sortColors(int A[], int n) {
        int start = 0;
        for(int i=0 ; i<n ;){
            if(A[i] == 0){
                A[i] = A[start];
                A[start] = 0;
                start++;
                i++;
            }
            else if(A[i] == 1){
                i++;
            }
            else{
                A[i] = A[n-1];
                A[n-1] = 2;
                n--;
            }
        }
    }
};
