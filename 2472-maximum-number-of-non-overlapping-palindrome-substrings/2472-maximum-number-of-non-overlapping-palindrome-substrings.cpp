class Solution {
public:
    bool palindrome(string s){
        int st = 0;
        int en = s.length()-1;
        while(st < en){
            if(s[st++] != s[en--]){
                return false;
            }
        }
        return true;
    }
    int maxPalindromes(string s, int k) {
        int n = s.length();
        int ans = 0;
        int st = 0;
        for(int i = 0;i<n;i++){
            if(i - st + 1 >= k && palindrome(s.substr(i - k + 1,k))){
                ans++;
                st = i + 1;
            }
            else if(i - st + 1 >= k + 1 && palindrome(s.substr(i - k,k+1))){
                ans++;
                st = i + 1;
            }
            
        }
        return ans;
    }
};