class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int> mp;
        map<char,int> mp1;
        int cnt = 0;
        int st = 0;
        int left = 0;
        int mn = INT_MAX;
        for(int i = 0;i<t.length();i++){
            mp[t[i]]++;
        }
        for(int i = 0;i<s.length();i++){
            mp1[s[i]]++;
            if(mp.count(s[i]) && mp1[s[i]] == mp[s[i]]){
                cnt++;
            }
            while(cnt == mp.size()){
                if(i-st+1 < mn){
                    mn = i-st+1;
                    left = st;
                }
                mp1[s[st]]--;
                if(mp.count(s[st]) && mp1[s[st]] < mp[s[st]]){
                    cnt--;
                }
                st++;
            }
        }
        if(mn == INT_MAX){
            return "";
        }
        else{
            return s.substr(left,mn);
        }
    }
};