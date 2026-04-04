class Solution {
public:
    int countSubarrays(vector<int>& nums, int maxSum) {
        int cnt = 1;
        long long sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] <= maxSum) {
                sum += nums[i];
            } else {
                cnt++;
                sum = nums[i];
            }
        }
        return cnt;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int cnt = countSubarrays(nums, mid);

            if (cnt > k) {
                low = mid + 1; // need bigger sum
            } else {
                high = mid - 1; // try smaller
            }
        }

        return low;
    }
};