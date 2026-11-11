class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                swap(nums[cnt],nums[i]);
                cnt++;
            }
        }
        for(int i = cnt;i<nums.size();i++){
            if(nums[i] == 1){
                swap(nums[i],nums[cnt]);
                cnt++;
            }
        }
    }
};