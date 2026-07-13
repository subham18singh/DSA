class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        for(int i = s.length()-1;i>=0;i--){
            if(s[i] == ' ' && s[i+1] == ' '){
                continue;
            }
            ans+=s[i];
        }
        while(!ans.empty() && ans.front() == ' '){
            ans.erase(ans.begin());
        }
        while(!ans.empty() && ans.back() == ' '){
            ans.pop_back();
        }
        int st = 0;
        int en = 0;
        for(int j = 0;j<=ans.length();j++){
            if(j == ans.length() || ans[j] == ' '){
                en = j - 1 ;
                while(st < en){
                    swap(ans[st++],ans[en--]);
                }
                st = j + 1;
            }
        }
        
        return ans;
    }
};