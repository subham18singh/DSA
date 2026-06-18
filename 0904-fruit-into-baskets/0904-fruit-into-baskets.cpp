class Solution {
public:
    int totalFruit(vector<int>& fruit) {
        unordered_map<int,int> mp;
        int st = 0;
        int mx = 0;
        for(int i = 0;i<fruit.size();i++){
            mp[fruit[i]]++;
            while(mp.size() > 2){
                mp[fruit[st]]--;
                if(mp[fruit[st]] == 0){
                    mp.erase(fruit[st]);
                }
                st++;
            }
            mx = max(mx,i-st + 1);
        }
        return mx;
    }
};