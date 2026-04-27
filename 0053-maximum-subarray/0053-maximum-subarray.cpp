class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0],sum1 = nums[0];
        for(int i = 1;i<n;i++){
            sum+=nums[i];
            if(nums[i] > sum){
                sum = nums[i];
            }
            if(sum > sum1){
                sum1 = sum;
            }
        }
        return sum1;
    }
};