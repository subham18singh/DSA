class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int st = 0;
        int cmax = 0;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[st]]--;
                if(mp[s[st]]==0){
                    mp.erase(s[st]);
                }
                st++;
            }
            cmax = max(cmax,i-st+1);
        }
        return cmax;
    }
};