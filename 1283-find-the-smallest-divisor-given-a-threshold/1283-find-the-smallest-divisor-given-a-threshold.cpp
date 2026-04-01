class Solution {
public:
    int computeSum(vector<int>& nums, int d) {
        int sum = 0;
        for (int x : nums) {
            sum += (x + d - 1) / d; // ceil(x / d)
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (computeSum(nums, mid) <= threshold) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};