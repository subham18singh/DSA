class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(char x: s){
            if(isalnum(x)){
                a+=tolower(x);
            }
            else{
                continue;
            }
        }
        int st = 0;
        int en = a.length()-1;
        while(st < en){
            if(a[st++]!=a[en--]){
                return false;
            }
        }
        return true;
    }
};