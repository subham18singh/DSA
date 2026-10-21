class Solution {
public:
    bool isSorted(string s){
        for(int i = 0; i + 1< s.length();i++){
            if(s[i] > s[i+1]){
                return false;
            }
        }
        return true;
    }
    int minOperations(string s) {
        int n = s.length();
        if(isSorted(s)){
            return 0;
        }
        if(n == 2){
            return -1;
        }
        char mn = s[0];
        char mx = s[0];
        for(int i = 1;i < n;i++){
            mn = min(mn,s[i]);
            mx = max(mx,s[i]);
        }
        if(mn == s[0] || mx == s[n - 1]){
            return 1;
        }

        for(int i = 1;i<n - 1;i++){
            if(mn == s[i] || mx == s[i]){
                return 2;
            }
        }
        return 3;
    }
};