class Solution {
public:
    int check(vector<int> arr,int k,int day){
        int cnt = 0;
        int cnt1 = 0;
        for(int i = 0; i < arr.size();i++){
            if(arr[i] <= day){
                cnt1++;
            }
            else{
                cnt1 = 0;
            }
            if(cnt1 == k){
                cnt++;
                cnt1 = 0;
            }
        }
        return cnt;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxi = 0;
        for(int i : bloomDay){
            maxi = max(i,maxi);
        }
        int low = 1;
        int high = maxi;
        int ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int cnt = check(bloomDay,k,mid);
            if(cnt >= m){
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