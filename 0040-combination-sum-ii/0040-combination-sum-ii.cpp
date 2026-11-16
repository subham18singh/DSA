class Solution {
public:
    void sum(int i, vector<vector<int>> &ans,vector<int> &ds, vector<int> &arr , int tar , int n){
        if(tar == 0){
            ans.push_back(ds);
            return ;
        }
        if(i == n){
            return ;
        }
        if(arr[i] <= tar){
            ds.push_back(arr[i]);
            sum(i+1,ans,ds,arr,tar - arr[i] , n);
            ds.pop_back();
        }
        int j = i + 1;
        while(j < n && arr[i] == arr[j]){
            j++;
        }
        sum(j,ans,ds,arr,tar,n);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n = candidates.size();
        vector<int> ds;
        vector<vector<int>> ans;
        sum(0,ans,ds,candidates,target,n);
        return ans;
    }
};