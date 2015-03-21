class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int *p = new int[m+n];
        int k = 0;
        int i = 0;
        int j = 0;
        while(i < m && j < n){
            if(A[i] <= B[j])
                p[k++] = A[i++];

            else
                p[k++] = B[j++];

        }
        if(i < m)
            for( ; i<m ; i++)
                p[k++] = A[i];  //  notice
        if(j < n)
            for( ; j<n ; j++)
                p[k++] = B[j];
        for(int h=0 ; h<m+n ; h++)
            A[h] = p[h];
        return ;
    }
};
