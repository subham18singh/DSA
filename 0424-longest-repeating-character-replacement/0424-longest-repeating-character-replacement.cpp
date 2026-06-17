class Solution {
public:
    int characterReplacement(string s, int k) {
        int st = 0;
        int maxc = 0;
        int mx = 0;
        vector<int> vc(26,0);
        for(int i = 0;i<s.length();i++){
            vc[s[i] - 'A']++;
            maxc = max(maxc,vc[s[i]-'A']);
            while((i-st +1 ) - maxc > k){
                vc[s[st]-'A']--;
                st++;
            }
            mx = max(mx,i-st+1);
        }
        return mx;
    }
};