class Solution {
public:
    int helper(int A[], int low, int high, int target){
        if(low > high)
            return -1;
        int mid = (low + high) / 2;
        if(A[mid] == target)
            return mid;
        else if(A[mid] > target)
            return helper(A, low, mid-1, target);
        else
            return helper(A, mid+1, high, target);
    }

    vector<int> searchRange(int A[], int n, int target) {
        int res = helper(A, 0, n-1, target);
        vector<int> vec;
        vec.resize(2,-1);
        if(res == -1)
            return vec;
        int start, end;
        for(int i=res ; i<n ; i++)
            if(A[i] == target)
                end = i;
            else
                break;
        
        for(int i=res ; i>=0 ; i--)
            if(A[i] == target)
                start = i;
            else
                break;
        vec[0] = start;
        vec[1] = end;
        return vec;
    }
};
