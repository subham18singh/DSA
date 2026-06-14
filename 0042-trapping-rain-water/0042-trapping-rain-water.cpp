class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int lmax = 0;
        int rmax = 0;
        int ans = 0;
        while(left < right){
            if(height[left] < height[right]){
                lmax = max(lmax,height[left]);
                ans += lmax - height[left];
                left++;
            }
            else{
                rmax = max(rmax,height[right]);
                ans+=rmax - height[right];
                right--;
            }
        }
        return ans;
    }
};