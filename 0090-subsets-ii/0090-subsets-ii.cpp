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
        int j = i+1;
        while(j < n && nums[i] == nums[j]){
            j++;
        }
        make(j,ds,ans,nums,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
        make(0,ds,ans,nums,n);
        return ans;

    }
};