class Solution {
public:
    int numberOfSubstrings(string s) {
        int st = 0;
        map<char, int> mp;
        int cnt = 0;
        int d = 0;
        int n = s.length();
        for (int i = 0; i < s.length(); i++){
            mp[s[i]]++;
            while(mp.size() == 3){
                mp[s[st]]--;
                cnt+=(n-i);
                if(mp[s[st]] == 0){
                    mp.erase(s[st]);
                }
                st++;
            }
        }
        return cnt;    
    }
};