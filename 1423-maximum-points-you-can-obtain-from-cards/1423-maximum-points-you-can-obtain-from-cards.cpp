class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        for(int i:cardPoints){
            total+=i;
        }
        int d = cardPoints.size() - k;
        if(d == 0){
            return total;
        }
        int sum = 0;
        int mn;
        for(int i = 0;i<d;i++){
            sum+=cardPoints[i];
        }
        mn = sum;
        for(int i = d;i<cardPoints.size();i++){
            sum-=cardPoints[i-d];
            sum+=cardPoints[i];
            mn = min(mn,sum);
        }
        return total-mn;
    }
};