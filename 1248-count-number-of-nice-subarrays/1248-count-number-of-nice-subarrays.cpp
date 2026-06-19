class Solution {
public:
    int count(vector<int>& nums, int k){
        int st = 0;
        int cnt = 0;
        int mx = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]%2 != 0){
                cnt++;
            }
            while(cnt > k){
                if(nums[st]%2 != 0){
                    cnt--;
                }
                st++;
            }
            mx+=(i-st+1);
       }
       return mx;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return count(nums,k) - count(nums,k-1);
    }
};