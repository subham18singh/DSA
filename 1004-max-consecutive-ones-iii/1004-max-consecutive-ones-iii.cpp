class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cz = 0;
        int st = 0;
        int en = 0;
        int mx = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                cz++;
            }
            while(cz > k){
                if(nums[st]==0){
                    cz--;
                }
                st++;
            }
            mx = max(mx,i-st+1);
        }
        return mx;
    }
};