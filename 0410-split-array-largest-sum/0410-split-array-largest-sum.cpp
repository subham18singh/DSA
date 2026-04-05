class Solution {
public:
    bool check(vector<int> arr,int mid,int k){
        int sum = 0;
        int cnt = 1;

        for(int i= 0;i<arr.size();i++){
            if(sum + arr[i] <= mid){
                sum+=arr[i];
            }
            else{
                cnt++;
                sum = arr[i];
            }
            if(cnt > k){
                return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        for(int i : nums){
            low = max(low,i);
            high += i;
        }
        int ans;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(nums,mid,k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};