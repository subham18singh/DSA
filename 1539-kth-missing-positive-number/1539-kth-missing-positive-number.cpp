class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a = 1;
        int cnt = 0;
        int i = 0;
        while(cnt < k){
            if(i < arr.size() && arr[i] == a){
                i++;
            }
            else{
                cnt++;
                if(cnt == k) return a;
            }
            a++;
        }
        return a;
    }
};