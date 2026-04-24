class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i<nums.size();i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int ele1 = nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int ele2 = nums[j];
                int low = j+1;
                int high = nums.size()-1;
                
                while(low < high){
                    vector<int> arr;
                    long long sum =(long long) ele1 + ele2 + nums[low] + nums[high];
                    if(sum == target){
                        arr.push_back(ele1);
                        arr.push_back(ele2);
                        arr.push_back(nums[low]);
                        arr.push_back(nums[high]);
                        ans.push_back(arr);
                        while(low < high && nums[low] == nums[low+1]) low++;
                        while(high > 0 && nums[high] == nums[high-1]) high--;
                        low++;
                        high--;
                    }
                    else if(sum < target){
                        low++;
                    }
                    else{
                        high--;
                    }
                }
            }    
        }
        return ans;
    }
};