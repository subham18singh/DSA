class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int n = arr.size();
        for(int i = 0;i<k;i++){
            sum+=arr[i];
        }
        double avg = (double)sum/(double)k;
        int cnt = avg>=threshold?1:0;
        for(int i = k;i<n;i++){
            sum+=arr[i];
            sum-=arr[i-k];
            double av = double(sum)/(double)k;
            if(av >= threshold){
                cnt++;
            }
        }
        return cnt;
    }
};