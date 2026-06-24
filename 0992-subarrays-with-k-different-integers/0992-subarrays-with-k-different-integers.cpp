class Solution {
public:
    int count(vector<int>& nums, int k){
        int st = 0;
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp.size() > k){
                mp[nums[st]]--;
                if(mp[nums[st]] == 0){
                    mp.erase(nums[st]);
                }
                st++;
            }
            ans+=(i-st+1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k) - count(nums,k-1);
    }
};