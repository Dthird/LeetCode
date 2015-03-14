class Solution {
public:
    int peak(const vector<int> &num, int start, int end){
        if(start == end)
            return start;
        int mid = (start + end) / 2;
        if(num[mid] > num[mid+1])
            peak(num, start, mid);
        else
            peak(num, mid + 1, end);
    }
    
    int findPeakElement(const vector<int> &num) {
        return peak(num, 0, num.size() - 1);
    }
};
