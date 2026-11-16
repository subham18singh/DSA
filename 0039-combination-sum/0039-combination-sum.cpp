class Solution {
public:
    void sum(int i ,vector<int> ds , vector<vector<int>> &ans , vector<int> &arr , int tar , int n){
        if(i == n){
            if(tar == 0){
                ans.push_back(ds);
            }
            return ;
        }
        if(arr[i] <= tar){
            ds.push_back(arr[i]);
            sum(i,ds,ans,arr,tar - arr[i],n);
            ds.pop_back();
        }
        sum(i+1,ds,ans,arr,tar,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> ds;
        sum(0,ds,ans,candidates,target,n);
        return ans;
    }
};