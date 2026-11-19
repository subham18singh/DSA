class Solution {
public:
    void make(int i, vector<int>& ds, vector<vector<int>>& ans , vector<int> & nums, int n ){
        if(i == n){
            ans.push_back(ds);
            return ;
        }
        ds.push_back(nums[i]);
        make(i+1,ds,ans,nums,n);
        ds.pop_back();
        make(i+1,ds,ans,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
        make(0,ds,ans,nums,n);
        return ans;
    }
};