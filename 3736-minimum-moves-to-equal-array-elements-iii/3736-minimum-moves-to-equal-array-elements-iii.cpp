class Solution {
public:
    int minMoves(vector<int>& nums) {
        int cnt = 0;
        int maxi = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            maxi = max(maxi,nums[i]);
        }

        for(int i = 0;i<n;i++){
            cnt+= (maxi - nums[i]);
        }
        return cnt;
    }
};