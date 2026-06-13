class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans;
        int d = 2*k+1;
        if(d > nums.size()){
            for(int i = 0;i<nums.size();i++){
                ans.push_back(-1);
            }
            return ans;
        }
        long sum = 0;
        for(int i = 0;i<k;i++){
            ans.push_back(-1);
        }
        for(int i = 0;i<nums.size();i++){
            if(i == d-1){
                sum+=nums[i];
                long avg = sum/d;
                ans.push_back(avg);
            }
            else if(i >= d){
                sum-=nums[i-d];
                sum+=nums[i];
                long avg = sum/d;
                ans.push_back(avg);
            }
            else{
                sum+=nums[i];
            }
        }
        for(int i = 0;i<k;i++){
            ans.push_back(-1);
        }
        return ans;
    }
};