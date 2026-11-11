class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int st = 0;
        int en = arr.size()-1;
        int mid = st + (en-st)/2;
        while(st < en){
            if(mid%2 == 1) mid--;
            if(arr[mid] == arr[mid+1]){
                st = mid +2;
            }
            else{
                en = mid;
            }
            mid = st + (en - st) / 2;
        }
        return arr[st];
    }
};