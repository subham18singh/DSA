class Solution {
public:
    vector<int> row(int row){
            vector<int> ans;
            ans.push_back(1);
            int n = 1;
            for(int j = 1; j < row;j++){
                n = n * (row-j);
                n/=j;
                ans.push_back(n);
            }
            return ans;
    }
    vector<vector<int>> generate(int num) {
        vector<vector<int>> arr;
        for(int i = 1; i <= num;i++){
            arr.push_back(row(i));
        }
        return arr;
    }
};