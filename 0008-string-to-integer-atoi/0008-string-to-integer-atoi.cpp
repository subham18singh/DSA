class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();
        while(i < n){
            if(s[i] == ' '){
                i++;
            }
            else{
                break;
            }
        }
        int sign = 1;
        if(i < n && (s[i] == '-' || s[i] == '+')){
            if(s[i] == '-'){
                sign = -1;
            }
            i++;
        }
        long long ans = 0;
        while(i < n && isdigit(s[i])){
            int digit = s[i] - '0';
            ans = ans*10 + digit;
            if(ans*sign >= INT_MAX){
                return INT_MAX;
            }
            if(ans*sign <= INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return ans*sign;
    }
};