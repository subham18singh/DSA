class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        int st = 0;
        int prefix = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            mp[nums[i]]++;

            if (mp.size() > k) {

                while (mp.size() > k) {

                    mp[nums[st]]--;

                    if (mp[nums[st]] == 0)
                        mp.erase(nums[st]);

                    st++;
                }

                prefix = 0;
            }

            while (mp[nums[st]] > 1) {

                mp[nums[st]]--;

                st++;
                prefix++;
            }

            if (mp.size() == k)
                ans += prefix + 1;
        }

        return ans;
    }
};