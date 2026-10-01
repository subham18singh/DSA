class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int cnt = 0;
        int n = seq.size();
        vector<int> arr;
        vector<int> ans;
        for(int i = 0;i < n;i++){
            if(seq[i] == '('){
                cnt++;
            }
            else if(seq[i] == ')'){
                cnt--;
            }
            arr.push_back(cnt);
        }
        for(int i = 0;i<n;i++){
            if(seq[i] == '('){
                if(arr[i]%2 == 0){
                    ans.push_back(1);
                }
                else{
                    ans.push_back(0);
                }
            }
            else if(seq[i] == ')'){
                if(arr[i - 1]%2 == 0){
                    ans.push_back(1);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        return ans;

        // vector<int> ans;
        // int cnt = 0;
        // for(char c : seq){
        //     if(c == '('){
        //         cnt++;
        //         ans.push_back(cnt % 2);
        //     }
        //     else{
        //         ans.push_back(cnt % 2);
        //         cnt--;
        //     }
        // }
        // return ans;
    }
};