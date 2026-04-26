class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int st = 0;
        int en = arr.size()-1;
        int ans;
        while(st < en){
            int mid = st + (en - st) /2;
            if(arr[mid] > arr[mid +1]){
                en = mid;
            }
            else{
                st = mid + 1;
            }
        }
        return st;
    }
};