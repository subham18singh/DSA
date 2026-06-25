class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        long long ch = pow(2,31);
        while(x!=0){
            if(rev < -(ch)/10 || rev > (ch-1)/10){
                return 0;
            } 
            rev = (rev*10) + (x%10);
            x/=10;
        } 
        return rev;  
    }
};