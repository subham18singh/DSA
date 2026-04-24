class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans;
       sort(nums.begin(),nums.end());
       for(int i = 0;i<nums.size();i++){
            int tar = -nums[i];
            int low = i+1;
            int high = nums.size()-1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            while(low<high){
                int sum = nums[low] + nums[high];
                if(sum == tar){
                    vector<int> arr;
                    arr.push_back(nums[i]);
                    arr.push_back(nums[low]);
                    arr.push_back(nums[high]);
                    ans.push_back(arr);
                    while(low < high && nums[low] == nums[low+1]) low++;
                    while(high > 0 && nums[high] == nums[high-1]) high--;
                    low++;
                    high--;
                }
                else if(sum < tar){
                    low++;
                }
                else{
                    high--;
                }
            }
       }
       return ans;
    }
};