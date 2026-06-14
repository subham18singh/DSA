class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int maxi = 0;
        int st = 0;
        int en = height.size()-1;
        while(st < en){
            int h = min(height[st],height[en]);
            int len = en - st;
            area = h*len;
            maxi = max(area,maxi);
            if(height[st] < height[en]){
                st++;
            }
            else{
                en--;
            }
        }
        return maxi;
    }
};