class Solution {
public:
    int search(vector<int>& arr, int target) {
        int st = 0;
        int en = arr.size()-1;
        while(st <= en){
            int mid = st + (en - st) / 2;
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[st] <= arr[mid]){
                if(arr[st] <= target && arr[mid] >= target){
                    en = mid -1;
                }
                else{
                    st = mid + 1;
                }
            }
            else{
                if(arr[mid] <= target && arr[en] >= target){
                    st = mid + 1;
                }
                else{
                    en = mid - 1;
                }
            }
        }
        return -1;
    }
};