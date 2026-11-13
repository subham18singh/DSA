class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int ans2 = 0;
        for(int i = 0;i<gain.size();i++){
            ans+=gain[i];
            ans2 = max(ans,ans2);
        }
        return ans2;
    }
};