class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> mp1;
        for(auto it:mp){
            mp1.push_back({it.second,it.first});
        }
        sort(mp1.begin(),mp1.end(), greater<pair<int,char>>());
        string ans = "";
        for(auto it:mp1){
            int n = it.first;
            while(n!=0){
                ans+=it.second;
                n--;
            }
        }
        return ans;
    }
};