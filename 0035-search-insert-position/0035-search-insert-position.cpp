class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int st = 0;
        int en = arr.size()-1;
        int mid = (st + en) /2;
        while(st <= en){
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] < target){
                st = mid+1;
            }
            else{
                en = mid-1;
            }
            mid = (st+en)/2;
        }
        return st;
    }
};