class Solution {
public:
    int st = 0;
    int mxlen = 1;

    void expand(string &s, int left,int right){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            if(right - left + 1 > mxlen){
                mxlen = right - left + 1;
                st = left;
            }
            left--;
            right++;
        }
    }
    string longestPalindrome(string s) {
        int n = s.length();
        for(int i = 0;i<n;i++){
            expand(s,i,i);
            expand(s,i,i+1);
        }
        return s.substr(st,mxlen);
    }
};