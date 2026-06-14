class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(i > 0 && nums[i-1] == nums[i]){
                continue;
            }
            int st = i+1;
            int en = nums.size()-1;
            while(st < en){
                int sum = nums[i] + nums[st] + nums[en];
                if(sum==0){
                    ans.push_back({nums[i],nums[st],nums[en]});
                    while(st < en && nums[st] == nums[st+1]){
                        st++;
                    }
                    while(en > 0 && nums[en] == nums[en-1]){
                        en--;
                    }
                    st++;
                    en--;
                }
                else if(sum > 0){
                    en--;
                }
                else{
                    st++;
                }
            }
        }
        return ans;
    }
};