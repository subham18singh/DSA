class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // for(int i = 0; i < arr.size();i++){
        //     if(arr[i] <= k){
        //         k++;
        //     }
        // }
        // return k;

        int low = 0;
        int high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low ) /2;
            int miss = arr[mid] - (mid + 1);
            if(miss < k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low + k;
    }
};