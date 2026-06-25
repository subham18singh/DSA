class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long ch = pow(2,31);
        while(x!=0){
            rev = (rev*10) + (x%10);
            x/=10;
        } 
        if(rev < -(ch) || rev > ch-1){
            return 0;
        }
        return rev;  
    }
};