class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = 1;

        int cnt = 0;
        int odd = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 != 0) {
                odd++;
            }
            if(mp.find(odd - k) != mp.end()){
                cnt+=mp[odd-k];
            }
            mp[odd]++;
        }
        return cnt;
    }
};