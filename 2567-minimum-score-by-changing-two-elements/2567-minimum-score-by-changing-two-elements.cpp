class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        if(nums.size() <= 3){
            return 0;
        }
        int s1 = INT_MAX;int s2 = INT_MAX;int s3 = INT_MAX;
        int l1 = INT_MIN;int l2 = INT_MIN;int l3 = INT_MIN;

        for(int n : nums){
            if(n < s1){
                s3 = s2;
                s2 = s1;
                s1 = n;
            }
            else if(n < s2){
                s3 = s2;
                s2 = n;
            }
            else if(n < s3){
                s3 = n;
            }

            if(n > l1){
                l3 = l2;
                l2 = l1;
                l1 = n;
            }
            else if(n > l2){
                l3 = l2;
                l2 = n;
            }
            else if(n > l3){
                l3 = n;
            }
        }
        return min({l3 - s1,l2 - s2 , l1 - s3});
    }
};