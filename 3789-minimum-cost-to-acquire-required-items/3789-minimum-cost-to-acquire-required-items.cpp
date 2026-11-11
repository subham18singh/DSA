class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long ans = 1LL * cost1 * need1 + 1LL * cost2 * need2;

        long long common = 1LL * min(need1,need2);

        long long ans2 = 1LL *  costBoth * common + 1LL * (need1 - common) * cost1 + 1LL * (need2 - common) * cost2;

        long long ans3 = 1LL * max(need1,need2) * costBoth;

        return min({ans,ans2,ans3});
    }
};