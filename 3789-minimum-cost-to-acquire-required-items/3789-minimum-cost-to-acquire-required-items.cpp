class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long ans = 0;

        if (cost1 + cost2 > costBoth) {
            int common = min(need1, need2);

            ans = 1LL * costBoth * common + 1LL * (need1 - common) * cost1 + 1LL * (need2 - common) * cost2;
        }
        else {
            ans = 1LL * cost1 * need1 + 1LL * cost2 * need2;
        }

        long long ans2 = 1LL * costBoth * max(need1,need2);
        return min(ans, ans2);
    }
};