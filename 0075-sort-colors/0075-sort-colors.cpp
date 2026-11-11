class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                swap(nums[cnt],nums[i]);
                cnt++;
            }
            else if(nums[i] == 2){
                swap(nums[i],nums[n - 1]);
                n--;
                i--;
            }
        }    
    }
};