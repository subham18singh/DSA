class Solution {
public:
    double power(double x, long long nn){
        if(nn == 0){
            return 1.0;
        }
        if(nn %2 == 0){
            return power(x*x,nn/2);
        }
        else{
            return x * power(x,nn-1);
        }
    }
    double myPow(double x, int n) {
        long long nn = n;
        if(nn < 0){
            nn = -1 * nn;
        }
        double ans = power(x,nn);
        if(n < 0){
            ans = 1.0 / ans;
        }
        return ans;
    }
};