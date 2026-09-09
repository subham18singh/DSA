class Solution {
public:
    int solve(string &s,int i,long long ans,int sign){
        if(i == s.size() || !isdigit(s[i])){
            return sign * ans;
        }
        int digit = s[i] - '0';

        if(ans > (INT_MAX - digit) / 10){
            if(sign == 1){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
    ans = ans*10 + digit;
    return solve(s,i+1,ans,sign);
        
    }
    int myAtoi(string s) {
        int i = 0;
        while(i < s.size() && s[i] == ' '){
            i++;
        }

        int sign = 1;
        if(i < s.size() && (s[i] == '+' || s[i] == '-')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }

        return solve(s,i,0,sign);
    }
};