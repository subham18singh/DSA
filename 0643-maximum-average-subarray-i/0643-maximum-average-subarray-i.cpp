class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        double avg = (double)sum/(double)k;
        for(int i = k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            double av = (double)sum/(double)k;
            avg = max(av,avg);
        }
        return avg;
    }
};