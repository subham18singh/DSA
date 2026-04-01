class Solution {
public:
    int check(vector<int> nums,int d){
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int div = ceil((float) nums[i] / d);
            sum+=div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = 0;
        for(int i: nums){
            maxi = max(maxi,i);
        }
        int st = 1;
        int en = maxi;
        while(st < en){
            int mid = st + (en - st) / 2;
            int div = check(nums,mid);
            if(div <= threshold){
                en = mid;
            } 
            else{
                st = mid + 1;
            }
        }
        return st;
    }
};