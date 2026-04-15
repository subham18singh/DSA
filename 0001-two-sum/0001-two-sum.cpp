class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 1;
        vector<int> ans;
        while(i < nums.size()-1){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            j++;
            if(j >= nums.size()){
                i++;
                j = i+1;
            }
        }
        return ans;
    }
};