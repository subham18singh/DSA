class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length()){
            return false;
        }
        string temp = s+s;
        int d = goal.length();
        for(int i = 0;i<goal.length();i++){
            bool flag = true;
            string st = temp.substr(i,d);
            for(int j = 0;j<goal.length();j++){
                if(st[j] == goal[j]){
                    continue;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                return true;
            }
        } 
        return false;      
    }
};