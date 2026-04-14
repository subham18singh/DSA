class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n = nums.size();
        int cnt = 1;
        int k = n/3;
        for(int i = 0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                cnt++;
            }
            else{
                if(cnt > k){
                    ans.push_back(nums[i]);
                }
                cnt = 1;
            }
        }
        if(cnt > k){
            ans.push_back(nums[n - 1]);
        }
        return ans;
        // vector<int> ans;
        // map<int,int> mp;
        // int n = nums.size();
        // int mini = (n/3) + 1;
        // for(int i = 0;i<n;i++){
        //     mp[nums[i]]++;
        //     if(mp[nums[i]] == mini){
        //         ans.push_back(nums[i]);
        //     }
        //     if(ans.size() == 2){
        //         break;
        //     }
        // }
        // return ans;
    }
};