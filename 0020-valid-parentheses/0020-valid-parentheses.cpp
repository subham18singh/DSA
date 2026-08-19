class Solution {
public:
    bool isValid(string s) {
        int cnt1 = 0;
        int cnt2 = 0;
        int cnt3 = 0;
        string open = "";
        int last = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == '('){
                cnt1++;
                last++;
                open+=s[i];
            }
            else if(s[i] == '{'){
                cnt2++;
                last++;
                open+=s[i];
            }
            else if(s[i] == '['){
                cnt3++;
                last++;
                open+=s[i];
            }
            else if(s[i] == ')'){
                if(cnt1 == 0 || open[last-1] != '('){
                    return false;
                }
                cnt1--;
                open.pop_back();
                last--;
            }
            else if(s[i] == '}'){
                if(cnt2 == 0 || open[last-1] != '{'){
                    return false;
                }
                cnt2--;
                open.pop_back();
                last--;
            }
            else if(s[i] == ']'){
                if(cnt3 == 0 || open[last-1] != '['){
                    return false;
                }
                cnt3--;
                open.pop_back();
                last--;
            }
        }
        if(cnt1 == 0 && cnt2 == 0 && cnt3 == 0){
            return true;
        }
        else{
            return false;
        }
    }
};