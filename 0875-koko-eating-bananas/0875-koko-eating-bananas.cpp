class Solution {
public:
    long long time(vector<int> piles, int h){
        long long hours = 0;
        for(int i = 0;i<piles.size();i++){
            hours+=ceil((double)piles[i]/h);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long maxi = 0;
        for(long long i : piles){
            maxi = max(i,maxi);
        }
        long long low = 1;
        long long high = maxi;
        while(low < high){
            long long mid = low + (high - low) / 2;
            long long th = time(piles,mid);
            if(th <= h){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};