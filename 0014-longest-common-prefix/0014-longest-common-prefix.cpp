class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string ch = strs[0];
        for(int i = 0;i<strs[0].length();i++){
            for(int j = 1;j<strs.size();j++){
                string ch2 = strs[j];
                if(i >= ch2.length()){
                    return ans;
                }
                if(ch[i] != ch2[i]){
                    return ans;
                }
            }
            ans+=ch[i];
        }
        return ans;
    }
};