class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        if(nums.size() <= 3){
            return 0;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        mini = min(mini , nums[n - 1] - nums[2]);
        mini = min(mini , nums[n - 2] - nums[1]);
        mini = min(mini , nums[n - 3] - nums[0]);
        return mini;
    }
};