class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                zero = i;
                break;
            }
        }
        bool right = true;
        bool left = true;
        for(int i = 0;i < n - 1;i++){
            int a = (zero + i) % n;
            int b = (zero + i + 1) % n;

            if(nums[a] > nums[b]){
                right = false;
            }

            a = (zero - i + n) % n;
            b = (zero - i - 1 + n) % n;

            if(nums[a] > nums[b]){
                left = false;
            }
        }
        int ans = INT_MAX;
        if(right){
            ans = min(ans , min(zero,n - zero + 2 )); 
        }

        if(left){
            ans = min(ans , min(zero + 2,n - zero));
        }

        return ans == INT_MAX ? -1 : ans;
    }
};