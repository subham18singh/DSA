class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<vector<char>> mp1(s.size() + 1);
        for(auto it:mp){
            mp1[it.second].push_back(it.first);
        }
        string ans = "";
        for(int i = s.size();i>0;i--){
            for(int j = 0;j<mp1[i].size();j++){
                ans.append(i,mp1[i][j]);
            }
        }
        return ans;
    }
};