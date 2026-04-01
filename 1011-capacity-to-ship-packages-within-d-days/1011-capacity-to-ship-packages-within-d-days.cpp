class Solution {
public:
    int check(vector<int> arr, int lim){
        int sum = 0;
        int cnt1 = 1;
        for(int i = 0;i<arr.size();i++){
            if(sum + arr[i] <= lim){
                sum+=arr[i];
            }
            else{
                sum = arr[i];
                cnt1++;
            }
        }
        return cnt1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = 0;
        int sum = 0;
        for(int i : weights){
            maxi = max(maxi,i);
            sum+=i;
        }
        int low = maxi;
        int high = sum;
        while(low < high){
            int mid = low + (high - low) / 2;
            int ch = check(weights,mid);
            if(ch <= days){
                high = mid;
            } 
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};